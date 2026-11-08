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

// Function: FUN_001e1288
// Address: 0x1e1288 - 0x1e12f0
void FUN_001e1288_0x1e1288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1288_0x1e1288");
#endif

    switch (ctx->pc) {
        case 0x1e12c4u: goto label_1e12c4;
        default: break;
    }

    ctx->pc = 0x1e1288u;

    // 0x1e1288: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e1288u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e128c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e128cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1290: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e1290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e1294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e129c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e12a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e12a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e12a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e12a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e12a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e12ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e12acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e12b0: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1e12b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1e12b4: 0x2610b340  addiu       $s0, $s0, -0x4CC0
    ctx->pc = 0x1e12b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947648));
    // 0x1e12b8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e12b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e12bc: 0xc07837a  jal         func_1E0DE8
    ctx->pc = 0x1E12BCu;
    SET_GPR_U32(ctx, 31, 0x1E12C4u);
    ctx->pc = 0x1E12C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E12BCu;
    // 0x1e12c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0DE8u, 0x1E12BCu, 0x1E12C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E12C4u;
label_1e12c4:
    // 0x1e12c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E12C4u;
    {
        const bool branch_taken_0x1e12c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e12c4) {
            ctx->pc = 0x1E12C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E12C4u;
            // 0x1e12c8: 0xae11000c  sw          $s1, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E12D8u;
            goto label_1e12d8;
        }
    }
    ctx->pc = 0x1E12CCu;
    // 0x1e12cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E12CCu;
    {
        const bool branch_taken_0x1e12cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12CCu;
        // 0x1e12d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12cc) {
            ctx->pc = 0x1E12DCu;
            goto label_1e12dc;
        }
    }
    ctx->pc = 0x1E12D4u;
    // 0x1e12d4: 0x0  nop
    ctx->pc = 0x1e12d4u;
    // NOP
label_1e12d8:
    // 0x1e12d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e12d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e12dc:
    // 0x1e12dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e12dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e12e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e12e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e12e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e12e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e12e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E12E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12E8u;
        // 0x1e12ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E12E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E12F0u;
}
