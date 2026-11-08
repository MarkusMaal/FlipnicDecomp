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

// Function: FUN_00107300
// Address: 0x107300 - 0x107344
void FUN_00107300_0x107300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00107300_0x107300");
#endif

    ctx->pc = 0x107300u;

    // 0x107300: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x107300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107304: 0x84c50038  lh          $a1, 0x38($a2)
    ctx->pc = 0x107304u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x107308: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x107308u;
    {
        const bool branch_taken_0x107308 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x107308) {
            ctx->pc = 0x10733Cu;
            goto label_10733c;
        }
    }
    ctx->pc = 0x107310u;
    // 0x107310: 0x848301fa  lh          $v1, 0x1FA($a0)
    ctx->pc = 0x107310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 506)));
    // 0x107314: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x107314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x107318: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x107318u;
    {
        const bool branch_taken_0x107318 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x107318) {
            ctx->pc = 0x10733Cu;
            goto label_10733c;
        }
    }
    ctx->pc = 0x107320u;
    // 0x107320: 0x84c6003a  lh          $a2, 0x3A($a2)
    ctx->pc = 0x107320u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 58)));
    // 0x107324: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x107324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107328: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x107328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x10732c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x10732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x107330: 0xa0652784  sb          $a1, 0x2784($v1)
    ctx->pc = 0x107330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10116), (uint8_t)GPR_U32(ctx, 5));
    // 0x107334: 0xa48001fa  sh          $zero, 0x1FA($a0)
    ctx->pc = 0x107334u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 506), (uint16_t)GPR_U32(ctx, 0));
    // 0x107338: 0xac8001fc  sw          $zero, 0x1FC($a0)
    ctx->pc = 0x107338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 0));
label_10733c:
    // 0x10733c: 0x3e00008  jr          $ra
    ctx->pc = 0x10733Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10733Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107344u;
}
