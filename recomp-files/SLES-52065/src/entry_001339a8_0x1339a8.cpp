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

// Function: entry_001339a8
// Address: 0x1339a8 - 0x133a14
void entry_001339a8_0x1339a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001339a8_0x1339a8");
#endif

    switch (ctx->pc) {
        case 0x1339b0u: goto label_1339b0;
        case 0x1339bcu: goto label_1339bc;
        case 0x1339c8u: goto label_1339c8;
        case 0x1339d0u: goto label_1339d0;
        case 0x1339dcu: goto label_1339dc;
        case 0x1339e8u: goto label_1339e8;
        case 0x1339f0u: goto label_1339f0;
        case 0x133a00u: goto label_133a00;
        case 0x133a0cu: goto label_133a0c;
        default: break;
    }

    ctx->pc = 0x1339a8u;

    // 0x1339a8: 0xc04d988  jal         func_136620
    ctx->pc = 0x1339A8u;
    SET_GPR_U32(ctx, 31, 0x1339B0u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1339A8u, 0x1339B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339B0u;
label_1339b0:
    // 0x1339b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1339b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1339b4: 0xc04c558  jal         func_131560
    ctx->pc = 0x1339B4u;
    SET_GPR_U32(ctx, 31, 0x1339BCu);
    ctx->pc = 0x1339B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339B4u;
    // 0x1339b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x1339B4u, 0x1339BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339BCu;
label_1339bc:
    // 0x1339bc: 0x264400fc  addiu       $a0, $s2, 0xFC
    ctx->pc = 0x1339bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 252));
    // 0x1339c0: 0xc080702  jal         func_201C08
    ctx->pc = 0x1339C0u;
    SET_GPR_U32(ctx, 31, 0x1339C8u);
    ctx->pc = 0x1339C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339C0u;
    // 0x1339c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1339C0u, 0x1339C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339C8u;
label_1339c8:
    // 0x1339c8: 0xc04c260  jal         func_130980
    ctx->pc = 0x1339C8u;
    SET_GPR_U32(ctx, 31, 0x1339D0u);
    ctx->pc = 0x130980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130980u, 0x1339C8u, 0x1339D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339D0u;
label_1339d0:
    // 0x1339d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1339d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1339d4: 0xc080702  jal         func_201C08
    ctx->pc = 0x1339D4u;
    SET_GPR_U32(ctx, 31, 0x1339DCu);
    ctx->pc = 0x1339D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339D4u;
    // 0x1339d8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1339D4u, 0x1339DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339DCu;
label_1339dc:
    // 0x1339dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1339dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1339e0: 0xc080664  jal         func_201990
    ctx->pc = 0x1339E0u;
    SET_GPR_U32(ctx, 31, 0x1339E8u);
    ctx->pc = 0x1339E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339E0u;
    // 0x1339e4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1339E0u, 0x1339E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339E8u;
label_1339e8:
    // 0x1339e8: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1339E8u;
    SET_GPR_U32(ctx, 31, 0x1339F0u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1339E8u, 0x1339F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339F0u;
label_1339f0:
    // 0x1339f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1339f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1339f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1339f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1339f8: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1339F8u;
    SET_GPR_U32(ctx, 31, 0x133A00u);
    ctx->pc = 0x1339FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339F8u;
    // 0x1339fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1339F8u, 0x133A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A00u;
label_133a00:
    // 0x133a00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a04: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x133A04u;
    SET_GPR_U32(ctx, 31, 0x133A0Cu);
    ctx->pc = 0x133A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A04u;
    // 0x133a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x133A04u, 0x133A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A0Cu;
label_133a0c:
    // 0x133a0c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x133A0Cu;
    {
        const bool branch_taken_0x133a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133a0c) {
            ctx->pc = 0x133A30u;
            return;
        }
    }
    ctx->pc = 0x133A14u;
}
