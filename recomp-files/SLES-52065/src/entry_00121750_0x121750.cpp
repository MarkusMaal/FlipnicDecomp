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

// Function: entry_00121750
// Address: 0x121750 - 0x1217c4
void entry_00121750_0x121750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121750_0x121750");
#endif

    switch (ctx->pc) {
        case 0x121788u: goto label_121788;
        case 0x1217a4u: goto label_1217a4;
        case 0x1217b8u: goto label_1217b8;
        default: break;
    }

    ctx->pc = 0x121750u;

    // 0x121750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x121750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x121754: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x121754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x121758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x121758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12175c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12175cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x121760: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x121760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x121764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x121768: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x121768u;
    {
        const bool branch_taken_0x121768 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121768u;
        // 0x12176c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121768) {
            ctx->pc = 0x1217DCu;
            return;
        }
    }
    ctx->pc = 0x121770u;
    // 0x121770: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x121770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x121774: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x121774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x121778: 0x24428860  addiu       $v0, $v0, -0x77A0
    ctx->pc = 0x121778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936672));
    // 0x12177c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12177cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121780: 0xc047cd8  jal         func_11F360
    ctx->pc = 0x121780u;
    SET_GPR_U32(ctx, 31, 0x121788u);
    ctx->pc = 0x121784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121780u;
    // 0x121784: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F360u, 0x121780u, 0x121788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121788u;
label_121788:
    // 0x121788: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x121788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12178c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12178Cu;
    {
        const bool branch_taken_0x12178c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12178c) {
            ctx->pc = 0x1217C4u;
            return;
        }
    }
    ctx->pc = 0x121794u;
    // 0x121794: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121794u;
    {
        const bool branch_taken_0x121794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121794u;
        // 0x121798: 0x26500008  addiu       $s0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121794) {
            ctx->pc = 0x1217C4u;
            return;
        }
    }
    ctx->pc = 0x12179Cu;
    // 0x12179c: 0xc048600  jal         func_121800
    ctx->pc = 0x12179Cu;
    SET_GPR_U32(ctx, 31, 0x1217A4u);
    ctx->pc = 0x1217A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12179Cu;
    // 0x1217a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121800u, 0x12179Cu, 0x1217A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217A4u;
label_1217a4:
    // 0x1217a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1217a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1217a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1217A8u;
    {
        const bool branch_taken_0x1217a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1217ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217A8u;
        // 0x1217ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217a8) {
            ctx->pc = 0x1217C4u;
            return;
        }
    }
    ctx->pc = 0x1217B0u;
    // 0x1217b0: 0xc048600  jal         func_121800
    ctx->pc = 0x1217B0u;
    SET_GPR_U32(ctx, 31, 0x1217B8u);
    ctx->pc = 0x121800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121800u, 0x1217B0u, 0x1217B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217B8u;
label_1217b8:
    // 0x1217b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1217b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1217bc: 0xc048990  jal         func_122640
    ctx->pc = 0x1217BCu;
    SET_GPR_U32(ctx, 31, 0x1217C4u);
    ctx->pc = 0x1217C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217BCu;
    // 0x1217c0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122640u, 0x1217BCu, 0x1217C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217C4u;
}
