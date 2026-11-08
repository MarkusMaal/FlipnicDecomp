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

// Function: entry_001c8234
// Address: 0x1c8234 - 0x1c82b0
void entry_001c8234_0x1c8234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8234_0x1c8234");
#endif

    switch (ctx->pc) {
        case 0x1c8250u: goto label_1c8250;
        case 0x1c8270u: goto label_1c8270;
        case 0x1c8288u: goto label_1c8288;
        case 0x1c8290u: goto label_1c8290;
        case 0x1c82a0u: goto label_1c82a0;
        case 0x1c82a8u: goto label_1c82a8;
        default: break;
    }

    ctx->pc = 0x1c8234u;

    // 0x1c8234: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c8234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c8238: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c8238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c823c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c823cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8240: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1c8240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8244: 0x260a0070  addiu       $t2, $s0, 0x70
    ctx->pc = 0x1c8244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1c8248: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C8248u;
    SET_GPR_U32(ctx, 31, 0x1C8250u);
    ctx->pc = 0x1C824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8248u;
    // 0x1c824c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C8248u, 0x1C8250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8250u;
label_1c8250:
    // 0x1c8250: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c8250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c8254: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1c8254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1c8258: 0x1062008a  beq         $v1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1C8258u;
    {
        const bool branch_taken_0x1c8258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8258u;
        // 0x1c825c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8258) {
            ctx->pc = 0x1C8484u;
            return;
        }
    }
    ctx->pc = 0x1C8260u;
    // 0x1c8260: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c8260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c8264: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1c8264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c8268: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1C8268u;
    SET_GPR_U32(ctx, 31, 0x1C8270u);
    ctx->pc = 0x1C826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8268u;
    // 0x1c826c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1C8268u, 0x1C8270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8270u;
label_1c8270:
    // 0x1c8270: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C8270u;
    {
        const bool branch_taken_0x1c8270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8270u;
        // 0x1c8274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8270) {
            ctx->pc = 0x1C82B0u;
            return;
        }
    }
    ctx->pc = 0x1C8278u;
    // 0x1c8278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c827c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c827cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c8280: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8280u;
    SET_GPR_U32(ctx, 31, 0x1C8288u);
    ctx->pc = 0x1C8284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8280u;
    // 0x1c8284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8280u, 0x1C8288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8288u;
label_1c8288:
    // 0x1c8288: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C8288u;
    SET_GPR_U32(ctx, 31, 0x1C8290u);
    ctx->pc = 0x1C828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8288u;
    // 0x1c828c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C8288u, 0x1C8290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8290u;
label_1c8290:
    // 0x1c8290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8294: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c8294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c8298: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8298u;
    SET_GPR_U32(ctx, 31, 0x1C82A0u);
    ctx->pc = 0x1C829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8298u;
    // 0x1c829c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8298u, 0x1C82A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82A0u;
label_1c82a0:
    // 0x1c82a0: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C82A0u;
    SET_GPR_U32(ctx, 31, 0x1C82A8u);
    ctx->pc = 0x1C82A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82A0u;
    // 0x1c82a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C82A0u, 0x1C82A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82A8u;
label_1c82a8:
    // 0x1c82a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C82A8u;
    {
        const bool branch_taken_0x1c82a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82A8u;
        // 0x1c82ac: 0x8e060070  lw          $a2, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82a8) {
            ctx->pc = 0x1C82F8u;
            return;
        }
    }
    ctx->pc = 0x1C82B0u;
}
