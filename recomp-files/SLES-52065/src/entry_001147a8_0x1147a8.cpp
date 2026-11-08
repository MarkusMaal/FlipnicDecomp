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

// Function: entry_001147a8
// Address: 0x1147a8 - 0x1147fc
void entry_001147a8_0x1147a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001147a8_0x1147a8");
#endif

    switch (ctx->pc) {
        case 0x1147c4u: goto label_1147c4;
        case 0x1147e4u: goto label_1147e4;
        default: break;
    }

    ctx->pc = 0x1147a8u;

    // 0x1147a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1147a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1147ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1147acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1147b0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1147b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1147b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1147b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1147b8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1147b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1147bc: 0xc045700  jal         func_115C00
    ctx->pc = 0x1147BCu;
    SET_GPR_U32(ctx, 31, 0x1147C4u);
    ctx->pc = 0x1147C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1147BCu;
    // 0x1147c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x1147BCu, 0x1147C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1147C4u;
label_1147c4:
    // 0x1147c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1147c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1147c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1147c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1147cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1147ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1147d0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1147d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1147d4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1147d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1147d8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1147d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1147dc: 0xc045700  jal         func_115C00
    ctx->pc = 0x1147DCu;
    SET_GPR_U32(ctx, 31, 0x1147E4u);
    ctx->pc = 0x1147E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1147DCu;
    // 0x1147e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x1147DCu, 0x1147E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1147E4u;
label_1147e4:
    // 0x1147e4: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x1147e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x1147e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1147e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1147ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1147ECu;
    {
        const bool branch_taken_0x1147ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1147F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147ECu;
        // 0x1147f0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1147ec) {
            ctx->pc = 0x1147FCu;
            return;
        }
    }
    ctx->pc = 0x1147F4u;
    // 0x1147f4: 0x100004e2  b           . + 4 + (0x4E2 << 2)
    ctx->pc = 0x1147F4u;
    {
        const bool branch_taken_0x1147f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1147F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147F4u;
        // 0x1147f8: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1147f4) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x1147FCu;
}
