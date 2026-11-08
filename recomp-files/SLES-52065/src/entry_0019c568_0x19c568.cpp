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

// Function: entry_0019c568
// Address: 0x19c568 - 0x19c5bc
void entry_0019c568_0x19c568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c568_0x19c568");
#endif

    switch (ctx->pc) {
        case 0x19c574u: goto label_19c574;
        case 0x19c580u: goto label_19c580;
        case 0x19c58cu: goto label_19c58c;
        case 0x19c598u: goto label_19c598;
        case 0x19c5a4u: goto label_19c5a4;
        default: break;
    }

    ctx->pc = 0x19c568u;

    // 0x19c568: 0x26240aa0  addiu       $a0, $s1, 0xAA0
    ctx->pc = 0x19c568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
    // 0x19c56c: 0xc0699c8  jal         func_1A6720
    ctx->pc = 0x19C56Cu;
    SET_GPR_U32(ctx, 31, 0x19C574u);
    ctx->pc = 0x19C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C56Cu;
    // 0x19c570: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6720u, 0x19C56Cu, 0x19C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C574u;
label_19c574:
    // 0x19c574: 0x26240a80  addiu       $a0, $s1, 0xA80
    ctx->pc = 0x19c574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
    // 0x19c578: 0xc069aa8  jal         func_1A6AA0
    ctx->pc = 0x19C578u;
    SET_GPR_U32(ctx, 31, 0x19C580u);
    ctx->pc = 0x19C57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C578u;
    // 0x19c57c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AA0u, 0x19C578u, 0x19C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C580u;
label_19c580:
    // 0x19c580: 0x262409e0  addiu       $a0, $s1, 0x9E0
    ctx->pc = 0x19c580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2528));
    // 0x19c584: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x19C584u;
    SET_GPR_U32(ctx, 31, 0x19C58Cu);
    ctx->pc = 0x19C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C584u;
    // 0x19c588: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x19C584u, 0x19C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C58Cu;
label_19c58c:
    // 0x19c58c: 0x26240940  addiu       $a0, $s1, 0x940
    ctx->pc = 0x19c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
    // 0x19c590: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x19C590u;
    SET_GPR_U32(ctx, 31, 0x19C598u);
    ctx->pc = 0x19C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C590u;
    // 0x19c594: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x19C590u, 0x19C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C598u;
label_19c598:
    // 0x19c598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c59c: 0xc064324  jal         func_190C90
    ctx->pc = 0x19C59Cu;
    SET_GPR_U32(ctx, 31, 0x19C5A4u);
    ctx->pc = 0x19C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C59Cu;
    // 0x19c5a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x19C59Cu, 0x19C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C5A4u;
label_19c5a4:
    // 0x19c5a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x19c5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x19c5a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19c5a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19c5ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C5ACu;
    {
        const bool branch_taken_0x19c5ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5ACu;
        // 0x19c5b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c5ac) {
            ctx->pc = 0x19C5C0u;
            return;
        }
    }
    ctx->pc = 0x19C5B4u;
    // 0x19c5b4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x19C5B4u;
    SET_GPR_U32(ctx, 31, 0x19C5BCu);
    ctx->pc = 0x19C5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C5B4u;
    // 0x19c5b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x19C5B4u, 0x19C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C5BCu;
}
