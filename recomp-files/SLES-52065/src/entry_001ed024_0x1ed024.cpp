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

// Function: entry_001ed024
// Address: 0x1ed024 - 0x1ed078
void entry_001ed024_0x1ed024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed024_0x1ed024");
#endif

    switch (ctx->pc) {
        case 0x1ed034u: goto label_1ed034;
        case 0x1ed03cu: goto label_1ed03c;
        case 0x1ed044u: goto label_1ed044;
        case 0x1ed050u: goto label_1ed050;
        default: break;
    }

    ctx->pc = 0x1ed024u;

    // 0x1ed024: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ed024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1ed028: 0xdc254298  ld          $a1, 0x4298($at)
    ctx->pc = 0x1ed028u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x224298u));
    // 0x1ed02c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1ED02Cu;
    SET_GPR_U32(ctx, 31, 0x1ED034u);
    ctx->pc = 0x1ED030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED02Cu;
    // 0x1ed030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1ED02Cu, 0x1ED034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED034u;
label_1ed034:
    // 0x1ed034: 0xc081a24  jal         func_206890
    ctx->pc = 0x1ED034u;
    SET_GPR_U32(ctx, 31, 0x1ED03Cu);
    ctx->pc = 0x1ED038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED034u;
    // 0x1ed038: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206890u, 0x1ED034u, 0x1ED03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED03Cu;
label_1ed03c:
    // 0x1ed03c: 0xc07b3a8  jal         func_1ECEA0
    ctx->pc = 0x1ED03Cu;
    SET_GPR_U32(ctx, 31, 0x1ED044u);
    ctx->pc = 0x1ED040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED03Cu;
    // 0x1ed040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECEA0u, 0x1ED03Cu, 0x1ED044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED044u;
label_1ed044:
    // 0x1ed044: 0x26444270  addiu       $a0, $s2, 0x4270
    ctx->pc = 0x1ed044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17008));
    // 0x1ed048: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1ED048u;
    SET_GPR_U32(ctx, 31, 0x1ED050u);
    ctx->pc = 0x1ED04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED048u;
    // 0x1ed04c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1ED048u, 0x1ED050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED050u;
label_1ed050:
    // 0x1ed050: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED050u;
    {
        const bool branch_taken_0x1ed050 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1ED054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED050u;
        // 0x1ed054: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed050) {
            ctx->pc = 0x1ED078u;
            return;
        }
    }
    ctx->pc = 0x1ED058u;
    // 0x1ed058: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1ed058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1ed05c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ed05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed060: 0x24844278  addiu       $a0, $a0, 0x4278
    ctx->pc = 0x1ed060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17016));
    // 0x1ed064: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ed064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed068: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ed068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed06c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed070: 0x807b5a2  j           func_1ED688
    ctx->pc = 0x1ED070u;
    ctx->pc = 0x1ED074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED070u;
    // 0x1ed074: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    FUN_001ed688_0x1ed688(rdram, ctx, runtime); return;
    ctx->pc = 0x1ED078u;
}
