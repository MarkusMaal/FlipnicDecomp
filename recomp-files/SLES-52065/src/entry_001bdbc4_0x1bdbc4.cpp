#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001bdbc4
// Address: 0x1bdbc4 - 0x1bdbec
void entry_001bdbc4_0x1bdbc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdbc4_0x1bdbc4");
#endif

    ctx->pc = 0x1bdbc4u;

    // 0x1bdbc4: 0x0  nop
    ctx->pc = 0x1bdbc4u;
    // NOP
    // 0x1bdbc8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1bdbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1bdbcc: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1bdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1bdbd0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x1bdbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1bdbd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bdbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bdbd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdbdc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1bdbdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bdbe0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDBE0u;
    {
        const bool branch_taken_0x1bdbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdbe0) {
            ctx->pc = 0x1BDBECu;
            return;
        }
    }
    ctx->pc = 0x1BDBE8u;
    // 0x1bdbe8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1bdbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1bdbecu;
}
