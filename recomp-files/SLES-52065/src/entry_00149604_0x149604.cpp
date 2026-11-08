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

// Function: entry_00149604
// Address: 0x149604 - 0x149634
void entry_00149604_0x149604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149604_0x149604");
#endif

    ctx->pc = 0x149604u;

    // 0x149604: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x149604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x149608: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x149608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14960c: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x14960cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x149610: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x149610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x149614: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x149614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x149618: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x149618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x14961c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14961cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x149620: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x149620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149624: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x149624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x149628: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x149628u;
    {
        const bool branch_taken_0x149628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149628) {
            ctx->pc = 0x149634u;
            return;
        }
    }
    ctx->pc = 0x149630u;
    // 0x149630: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x149630u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x149634u;
}
