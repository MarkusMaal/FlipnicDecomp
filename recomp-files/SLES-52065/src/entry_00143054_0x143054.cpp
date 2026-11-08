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

// Function: entry_00143054
// Address: 0x143054 - 0x14309c
void entry_00143054_0x143054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143054_0x143054");
#endif

    switch (ctx->pc) {
        case 0x143080u: goto label_143080;
        default: break;
    }

    ctx->pc = 0x143054u;

label_143054:
    // 0x143054: 0x0  nop
    ctx->pc = 0x143054u;
    // NOP
label_143058:
    // 0x143058: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x143058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
label_14305c:
    // 0x14305c: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x14305cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_143060:
    // 0x143060: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x143060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_143064:
    // 0x143064: 0x559821  addu        $s3, $v0, $s5
    ctx->pc = 0x143064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_143068:
    // 0x143068: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x143068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_14306c:
    // 0x14306c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x14306cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_143070:
    // 0x143070: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x143070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_143074:
    // 0x143074: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x143074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_143078:
    // 0x143078: 0x320f809  jalr        $t9
label_14307c:
    if (ctx->pc == 0x14307Cu) {
        ctx->pc = 0x14307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143078u;
        // 0x14307c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143080u;
        goto label_143080;
    }
    ctx->pc = 0x143078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x143080u);
        ctx->pc = 0x14307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143078u;
        // 0x14307c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143078u, 0x143080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143080u;
label_143080:
    // 0x143080: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x143080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_143084:
    // 0x143084: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x143084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_143088:
    // 0x143088: 0x251182a  slt         $v1, $s2, $s1
    ctx->pc = 0x143088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_14308c:
    // 0x14308c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x14308cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_143090:
    // 0x143090: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x143090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_143094:
    // 0x143094: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_143098:
    if (ctx->pc == 0x143098u) {
        ctx->pc = 0x143098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143094u;
        // 0x143098: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14309Cu;
        goto label_fallthrough_0x143094;
    }
    ctx->pc = 0x143094u;
    {
        const bool branch_taken_0x143094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x143098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143094u;
        // 0x143098: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143094) {
            ctx->pc = 0x143054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143054;
        }
    }
label_fallthrough_0x143094:
    ctx->pc = 0x14309Cu;
}
