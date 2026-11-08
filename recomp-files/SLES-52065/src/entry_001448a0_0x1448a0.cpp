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

// Function: entry_001448a0
// Address: 0x1448a0 - 0x1448ec
void entry_001448a0_0x1448a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001448a0_0x1448a0");
#endif

    switch (ctx->pc) {
        case 0x1448d4u: goto label_1448d4;
        default: break;
    }

    ctx->pc = 0x1448a0u;

    // 0x1448a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1448a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1448a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1448a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1448a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1448a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1448ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1448acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1448b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1448b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448b4: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1448B4u;
    {
        const bool branch_taken_0x1448b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1448B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448B4u;
        // 0x1448b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1448b4) {
            ctx->pc = 0x1448ECu;
            return;
        }
    }
    ctx->pc = 0x1448BCu;
    // 0x1448bc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1448bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1448c0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1448c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1448c4: 0x244292d8  addiu       $v0, $v0, -0x6D28
    ctx->pc = 0x1448c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939352));
    // 0x1448c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1448c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1448cc: 0xc04cfe8  jal         func_133FA0
    ctx->pc = 0x1448CCu;
    SET_GPR_U32(ctx, 31, 0x1448D4u);
    ctx->pc = 0x1448D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1448CCu;
    // 0x1448d0: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133FA0u, 0x1448CCu, 0x1448D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448D4u;
label_1448d4:
    // 0x1448d4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1448d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1448d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1448d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1448dc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1448DCu;
    {
        const bool branch_taken_0x1448dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1448E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448DCu;
        // 0x1448e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1448dc) {
            ctx->pc = 0x1448F0u;
            return;
        }
    }
    ctx->pc = 0x1448E4u;
    // 0x1448e4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1448E4u;
    SET_GPR_U32(ctx, 31, 0x1448ECu);
    ctx->pc = 0x1448E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1448E4u;
    // 0x1448e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1448E4u, 0x1448ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448ECu;
}
