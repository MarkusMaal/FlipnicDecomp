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

// Function: entry_001e005c
// Address: 0x1e005c - 0x1e0108
void entry_001e005c_0x1e005c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e005c_0x1e005c");
#endif

    switch (ctx->pc) {
        case 0x1e006cu: goto label_1e006c;
        case 0x1e0078u: goto label_1e0078;
        case 0x1e00a4u: goto label_1e00a4;
        case 0x1e00b0u: goto label_1e00b0;
        case 0x1e00b8u: goto label_1e00b8;
        case 0x1e00ccu: goto label_1e00cc;
        case 0x1e00d4u: goto label_1e00d4;
        case 0x1e00e0u: goto label_1e00e0;
        case 0x1e00f0u: goto label_1e00f0;
        case 0x1e00f8u: goto label_1e00f8;
        default: break;
    }

    ctx->pc = 0x1e005cu;

    // 0x1e005c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e005cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e0060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0064: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E0064u;
    SET_GPR_U32(ctx, 31, 0x1E006Cu);
    ctx->pc = 0x1E0068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0064u;
    // 0x1e0068: 0x3c1e0022  lui         $fp, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E0064u, 0x1E006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E006Cu;
label_1e006c:
    // 0x1e006c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e006cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0070: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1E0070u;
    SET_GPR_U32(ctx, 31, 0x1E0078u);
    ctx->pc = 0x1E0074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0070u;
    // 0x1e0074: 0x27d0a084  addiu       $s0, $fp, -0x5F7C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294942852));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1E0070u, 0x1E0078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0078u;
label_1e0078:
    // 0x1e0078: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1e0078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1e007c: 0x2465a080  addiu       $a1, $v1, -0x5F80
    ctx->pc = 0x1e007cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942848));
    // 0x1e0080: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1e0080u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e0084: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1e0084u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1e0088: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1e0088u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x1e008c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1e008cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e0090: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e0090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e0094: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1e0094u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e0098: 0x26d3a088  addiu       $s3, $s6, -0x5F78
    ctx->pc = 0x1e0098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294942856));
    // 0x1e009c: 0xc08218c  jal         func_208630
    ctx->pc = 0x1E009Cu;
    SET_GPR_U32(ctx, 31, 0x1E00A4u);
    ctx->pc = 0x1E00A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E009Cu;
    // 0x1e00a0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1E009Cu, 0x1E00A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00A4u;
label_1e00a4:
    // 0x1e00a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e00a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00a8: 0xc082014  jal         func_208050
    ctx->pc = 0x1E00A8u;
    SET_GPR_U32(ctx, 31, 0x1E00B0u);
    ctx->pc = 0x1E00ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00A8u;
    // 0x1e00ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1E00A8u, 0x1E00B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00B0u;
label_1e00b0:
    // 0x1e00b0: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1E00B0u;
    SET_GPR_U32(ctx, 31, 0x1E00B8u);
    ctx->pc = 0x1E00B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00B0u;
    // 0x1e00b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1E00B0u, 0x1E00B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00B8u;
label_1e00b8:
    // 0x1e00b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e00b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00bc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1e00bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e00c0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1e00c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1e00c4: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1E00C4u;
    SET_GPR_U32(ctx, 31, 0x1E00CCu);
    ctx->pc = 0x1E00C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00C4u;
    // 0x1e00c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1E00C4u, 0x1E00CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00CCu;
label_1e00cc:
    // 0x1e00cc: 0xc08218c  jal         func_208630
    ctx->pc = 0x1E00CCu;
    SET_GPR_U32(ctx, 31, 0x1E00D4u);
    ctx->pc = 0x1E00D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00CCu;
    // 0x1e00d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1E00CCu, 0x1E00D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00D4u;
label_1e00d4:
    // 0x1e00d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e00d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00d8: 0xc082014  jal         func_208050
    ctx->pc = 0x1E00D8u;
    SET_GPR_U32(ctx, 31, 0x1E00E0u);
    ctx->pc = 0x1E00DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00D8u;
    // 0x1e00dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1E00D8u, 0x1E00E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00E0u;
label_1e00e0:
    // 0x1e00e0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1e00e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1e00e4: 0xdc253930  ld          $a1, 0x3930($at)
    ctx->pc = 0x1e00e4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x223930u));
    // 0x1e00e8: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1E00E8u;
    SET_GPR_U32(ctx, 31, 0x1E00F0u);
    ctx->pc = 0x1E00ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00E8u;
    // 0x1e00ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1E00E8u, 0x1E00F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00F0u;
label_1e00f0:
    // 0x1e00f0: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1E00F0u;
    SET_GPR_U32(ctx, 31, 0x1E00F8u);
    ctx->pc = 0x1E00F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00F0u;
    // 0x1e00f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1E00F0u, 0x1E00F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00F8u;
label_1e00f8:
    // 0x1e00f8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E00F8u;
    {
        const bool branch_taken_0x1e00f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E00FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00F8u;
        // 0x1e00fc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00f8) {
            ctx->pc = 0x1E010Cu;
            return;
        }
    }
    ctx->pc = 0x1E0100u;
    // 0x1e0100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0100u;
    {
        const bool branch_taken_0x1e0100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0100u;
        // 0x1e0104: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0100) {
            ctx->pc = 0x1E010Cu;
            return;
        }
    }
    ctx->pc = 0x1E0108u;
}
