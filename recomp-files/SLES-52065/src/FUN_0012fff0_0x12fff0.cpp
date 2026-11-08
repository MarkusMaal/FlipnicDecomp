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

// Function: FUN_0012fff0
// Address: 0x12fff0 - 0x1300e8
void FUN_0012fff0_0x12fff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012fff0_0x12fff0");
#endif

    switch (ctx->pc) {
        case 0x130008u: goto label_130008;
        case 0x130020u: goto label_130020;
        case 0x13002cu: goto label_13002c;
        case 0x130044u: goto label_130044;
        case 0x130050u: goto label_130050;
        case 0x130068u: goto label_130068;
        case 0x130074u: goto label_130074;
        case 0x13008cu: goto label_13008c;
        case 0x130094u: goto label_130094;
        case 0x13009cu: goto label_13009c;
        case 0x1300a4u: goto label_1300a4;
        case 0x1300b8u: goto label_1300b8;
        case 0x1300d0u: goto label_1300d0;
        case 0x1300d8u: goto label_1300d8;
        default: break;
    }

    ctx->pc = 0x12fff0u;

    // 0x12fff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12fff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12fff4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12fff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12fff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12fffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12fffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130000: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x130000u;
    SET_GPR_U32(ctx, 31, 0x130008u);
    ctx->pc = 0x130004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130000u;
    // 0x130004: 0xaf8084b4  sw          $zero, -0x7B4C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935732), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x130000u, 0x130008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130008u;
label_130008:
    // 0x130008: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130008u;
    {
        const bool branch_taken_0x130008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130008u;
        // 0x13000c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130008) {
            ctx->pc = 0x130020u;
            goto label_130020;
        }
    }
    ctx->pc = 0x130010u;
    // 0x130010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130014: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x130014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x130018: 0xc04c37c  jal         func_130DF0
    ctx->pc = 0x130018u;
    SET_GPR_U32(ctx, 31, 0x130020u);
    ctx->pc = 0x13001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130018u;
    // 0x13001c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DF0u, 0x130018u, 0x130020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130020u;
label_130020:
    // 0x130020: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x130020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x130024: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x130024u;
    SET_GPR_U32(ctx, 31, 0x13002Cu);
    ctx->pc = 0x130028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130024u;
    // 0x130028: 0xaf908588  sw          $s0, -0x7A78($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x130024u, 0x13002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13002Cu;
label_13002c:
    // 0x13002c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13002Cu;
    {
        const bool branch_taken_0x13002c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13002Cu;
        // 0x130030: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13002c) {
            ctx->pc = 0x130044u;
            goto label_130044;
        }
    }
    ctx->pc = 0x130034u;
    // 0x130034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130038: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x130038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x13003c: 0xc04c37c  jal         func_130DF0
    ctx->pc = 0x13003Cu;
    SET_GPR_U32(ctx, 31, 0x130044u);
    ctx->pc = 0x130040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13003Cu;
    // 0x130040: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DF0u, 0x13003Cu, 0x130044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130044u;
label_130044:
    // 0x130044: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x130044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x130048: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x130048u;
    SET_GPR_U32(ctx, 31, 0x130050u);
    ctx->pc = 0x13004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130048u;
    // 0x13004c: 0xaf908584  sw          $s0, -0x7A7C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935940), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x130048u, 0x130050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130050u;
label_130050:
    // 0x130050: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130050u;
    {
        const bool branch_taken_0x130050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130050u;
        // 0x130054: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130050) {
            ctx->pc = 0x130068u;
            goto label_130068;
        }
    }
    ctx->pc = 0x130058u;
    // 0x130058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13005c: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x13005cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x130060: 0xc04c37c  jal         func_130DF0
    ctx->pc = 0x130060u;
    SET_GPR_U32(ctx, 31, 0x130068u);
    ctx->pc = 0x130064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130060u;
    // 0x130064: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DF0u, 0x130060u, 0x130068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130068u;
label_130068:
    // 0x130068: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x130068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13006c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13006Cu;
    SET_GPR_U32(ctx, 31, 0x130074u);
    ctx->pc = 0x130070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13006Cu;
    // 0x130070: 0xaf908580  sw          $s0, -0x7A80($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935936), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13006Cu, 0x130074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130074u;
label_130074:
    // 0x130074: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130074u;
    {
        const bool branch_taken_0x130074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130074u;
        // 0x130078: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130074) {
            ctx->pc = 0x13008Cu;
            goto label_13008c;
        }
    }
    ctx->pc = 0x13007Cu;
    // 0x13007c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13007cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130080: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x130080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x130084: 0xc04c3fc  jal         func_130FF0
    ctx->pc = 0x130084u;
    SET_GPR_U32(ctx, 31, 0x13008Cu);
    ctx->pc = 0x130088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130084u;
    // 0x130088: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FF0u, 0x130084u, 0x13008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13008Cu;
label_13008c:
    // 0x13008c: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x13008Cu;
    SET_GPR_U32(ctx, 31, 0x130094u);
    ctx->pc = 0x130090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13008Cu;
    // 0x130090: 0xaf90858c  sw          $s0, -0x7A74($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x13008Cu, 0x130094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130094u;
label_130094:
    // 0x130094: 0xc051480  jal         func_145200
    ctx->pc = 0x130094u;
    SET_GPR_U32(ctx, 31, 0x13009Cu);
    ctx->pc = 0x130098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130094u;
    // 0x130098: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145200u, 0x130094u, 0x13009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13009Cu;
label_13009c:
    // 0x13009c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13009Cu;
    SET_GPR_U32(ctx, 31, 0x1300A4u);
    ctx->pc = 0x1300A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13009Cu;
    // 0x1300a0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13009Cu, 0x1300A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300A4u;
label_1300a4:
    // 0x1300a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1300A4u;
    {
        const bool branch_taken_0x1300a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1300A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300A4u;
        // 0x1300a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300a4) {
            ctx->pc = 0x1300C0u;
            goto label_1300c0;
        }
    }
    ctx->pc = 0x1300ACu;
    // 0x1300ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1300acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300b0: 0xc049dd8  jal         func_127760
    ctx->pc = 0x1300B0u;
    SET_GPR_U32(ctx, 31, 0x1300B8u);
    ctx->pc = 0x1300B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300B0u;
    // 0x1300b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x1300B0u, 0x1300B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300B8u;
label_1300b8:
    // 0x1300b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1300b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1300bc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1300bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1300c0:
    // 0x1300c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1300c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300c4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1300c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1300c8: 0xc04a098  jal         func_128260
    ctx->pc = 0x1300C8u;
    SET_GPR_U32(ctx, 31, 0x1300D0u);
    ctx->pc = 0x1300CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300C8u;
    // 0x1300cc: 0xaf9085c8  sw          $s0, -0x7A38($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936008), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128260u, 0x1300C8u, 0x1300D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300D0u;
label_1300d0:
    // 0x1300d0: 0xc04bc4c  jal         func_12F130
    ctx->pc = 0x1300D0u;
    SET_GPR_U32(ctx, 31, 0x1300D8u);
    ctx->pc = 0x12F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F130u, 0x1300D0u, 0x1300D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300D8u;
label_1300d8:
    // 0x1300d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1300d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1300dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1300dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1300e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1300E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1300E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300E0u;
        // 0x1300e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1300E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1300E8u;
}
