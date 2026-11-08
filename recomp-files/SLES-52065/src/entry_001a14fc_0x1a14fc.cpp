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

// Function: entry_001a14fc
// Address: 0x1a14fc - 0x1a1540
void entry_001a14fc_0x1a14fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a14fc_0x1a14fc");
#endif

    switch (ctx->pc) {
        case 0x1a1508u: goto label_1a1508;
        case 0x1a1534u: goto label_1a1534;
        default: break;
    }

    ctx->pc = 0x1a14fcu;

label_1a14fc:
    // 0x1a14fc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1a14fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a1500:
    // 0x1a1500: 0xc063e08  jal         func_18F820
label_1a1504:
    if (ctx->pc == 0x1A1504u) {
        ctx->pc = 0x1A1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1500u;
        // 0x1a1504: 0xa280068c  sb          $zero, 0x68C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1676), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1508u;
        goto label_1a1508;
    }
    ctx->pc = 0x1A1500u;
    SET_GPR_U32(ctx, 31, 0x1A1508u);
    ctx->pc = 0x1A1504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1500u;
    // 0x1a1504: 0xa280068c  sb          $zero, 0x68C($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1676), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A1500u, 0x1A1508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1508u;
label_1a1508:
    // 0x1a1508: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a1508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a150c:
    // 0x1a150c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a150cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1510:
    // 0x1a1510: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a1510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a1514:
    // 0x1a1514: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a1514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a1518:
    // 0x1a1518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a151c:
    // 0x1a151c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a1520:
    // 0x1a1520: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a1520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1524:
    // 0x1a1524: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1528:
    // 0x1a1528: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a152c:
    // 0x1a152c: 0x320f809  jalr        $t9
label_1a1530:
    if (ctx->pc == 0x1A1530u) {
        ctx->pc = 0x1A1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A152Cu;
        // 0x1a1530: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1534u;
        goto label_1a1534;
    }
    ctx->pc = 0x1A152Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1534u);
        ctx->pc = 0x1A1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A152Cu;
        // 0x1a1530: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A152Cu, 0x1A1534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1534u;
label_1a1534:
    // 0x1a1534: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a1534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a1538:
    // 0x1a1538: 0x100001b2  b           . + 4 + (0x1B2 << 2)
label_1a153c:
    if (ctx->pc == 0x1A153Cu) {
        ctx->pc = 0x1A153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1538u;
        // 0x1a153c: 0xae830c7c  sw          $v1, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1540u;
        goto label_fallthrough_0x1a1538;
    }
    ctx->pc = 0x1A1538u;
    {
        const bool branch_taken_0x1a1538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1538u;
        // 0x1a153c: 0xae830c7c  sw          $v1, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1538) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
label_fallthrough_0x1a1538:
    ctx->pc = 0x1A1540u;
}
