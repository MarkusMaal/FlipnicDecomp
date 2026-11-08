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

// Function: entry_00112ec0
// Address: 0x112ec0 - 0x112ee8
void entry_00112ec0_0x112ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112ec0_0x112ec0");
#endif

    ctx->pc = 0x112ec0u;

    // 0x112ec0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x112ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x112ec4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x112ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x112ec8: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x112EC8u;
    {
        const bool branch_taken_0x112ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112ec8) {
            ctx->pc = 0x112E64u;
            return;
        }
    }
    ctx->pc = 0x112ED0u;
    // 0x112ed0: 0xa2200042  sb          $zero, 0x42($s1)
    ctx->pc = 0x112ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x112ed4: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x112ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x112ed8: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x112ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x112edc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x112edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x112ee0: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x112EE0u;
    {
        const bool branch_taken_0x112ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EE0u;
        // 0x112ee4: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ee0) {
            ctx->pc = 0x113600u;
            return;
        }
    }
    ctx->pc = 0x112EE8u;
}
