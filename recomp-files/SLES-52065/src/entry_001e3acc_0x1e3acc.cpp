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

// Function: entry_001e3acc
// Address: 0x1e3acc - 0x1e3b0c
void entry_001e3acc_0x1e3acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3acc_0x1e3acc");
#endif

    switch (ctx->pc) {
        case 0x1e3af4u: goto label_1e3af4;
        default: break;
    }

    ctx->pc = 0x1e3accu;

    // 0x1e3acc: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E3ACCu;
    {
        const bool branch_taken_0x1e3acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e3acc) {
            ctx->pc = 0x1E3B14u;
            return;
        }
    }
    ctx->pc = 0x1E3AD4u;
    // 0x1e3ad4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e3ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e3ad8: 0x92082b  sltu        $at, $a0, $s2
    ctx->pc = 0x1e3ad8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e3adc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1E3ADCu;
    {
        const bool branch_taken_0x1e3adc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3ADCu;
        // 0x1e3ae0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3adc) {
            ctx->pc = 0x1E3B0Cu;
            return;
        }
    }
    ctx->pc = 0x1E3AE4u;
    // 0x1e3ae4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e3ae8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e3ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3aec: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1E3AECu;
    SET_GPR_U32(ctx, 31, 0x1E3AF4u);
    ctx->pc = 0x1E3AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3AECu;
    // 0x1e3af0: 0x523023  subu        $a2, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E3AECu, 0x1E3AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3AF4u;
label_1e3af4:
    // 0x1e3af4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1e3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e3af8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e3afc: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1e3afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e3b00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3b04: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1e3b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1e3b08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1e3b0cu;
}
