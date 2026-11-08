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

// Function: FUN_0017c8e0
// Address: 0x17c8e0 - 0x17c984
void FUN_0017c8e0_0x17c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c8e0_0x17c8e0");
#endif

    switch (ctx->pc) {
        case 0x17c920u: goto label_17c920;
        case 0x17c944u: goto label_17c944;
        case 0x17c950u: goto label_17c950;
        case 0x17c968u: goto label_17c968;
        default: break;
    }

    ctx->pc = 0x17c8e0u;

    // 0x17c8e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c8e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17c8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17c8e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17c8ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c8f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17c8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c8f8: 0x12050017  beq         $s0, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x17C8F8u;
    {
        const bool branch_taken_0x17c8f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x17C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8F8u;
        // 0x17c8fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8f8) {
            ctx->pc = 0x17C958u;
            goto label_17c958;
        }
    }
    ctx->pc = 0x17C900u;
    // 0x17c900: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C900u;
    {
        const bool branch_taken_0x17c900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C900u;
        // 0x17c904: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c900) {
            ctx->pc = 0x17C928u;
            goto label_17c928;
        }
    }
    ctx->pc = 0x17C908u;
    // 0x17c908: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C908u;
    {
        const bool branch_taken_0x17c908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x17C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C908u;
        // 0x17c90c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c908) {
            ctx->pc = 0x17C918u;
            goto label_17c918;
        }
    }
    ctx->pc = 0x17C910u;
    // 0x17c910: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x17C910u;
    {
        const bool branch_taken_0x17c910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C910u;
        // 0x17c914: 0xae3001d4  sw          $s0, 0x1D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c910) {
            ctx->pc = 0x17C970u;
            goto label_17c970;
        }
    }
    ctx->pc = 0x17C918u;
label_17c918:
    // 0x17c918: 0xc042570  jal         func_1095C0
    ctx->pc = 0x17C918u;
    SET_GPR_U32(ctx, 31, 0x17C920u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x17C918u, 0x17C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C920u;
label_17c920:
    // 0x17c920: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17C920u;
    {
        const bool branch_taken_0x17c920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c920) {
            ctx->pc = 0x17C96Cu;
            goto label_17c96c;
        }
    }
    ctx->pc = 0x17C928u;
label_17c928:
    // 0x17c928: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x17c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x17c92c: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17C92Cu;
    {
        const bool branch_taken_0x17c92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x17c92c) {
            ctx->pc = 0x17C950u;
            goto label_17c950;
        }
    }
    ctx->pc = 0x17C934u;
    // 0x17c934: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17c934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17c938: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c93c: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17C93Cu;
    SET_GPR_U32(ctx, 31, 0x17C944u);
    ctx->pc = 0x17C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C93Cu;
    // 0x17c940: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17C93Cu, 0x17C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C944u;
label_17c944:
    // 0x17c944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c948: 0xc042118  jal         func_108460
    ctx->pc = 0x17C948u;
    SET_GPR_U32(ctx, 31, 0x17C950u);
    ctx->pc = 0x17C94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C948u;
    // 0x17c94c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x17C948u, 0x17C950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C950u;
label_17c950:
    // 0x17c950: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17C950u;
    {
        const bool branch_taken_0x17c950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C950u;
        // 0x17c954: 0xa22001d3  sb          $zero, 0x1D3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c950) {
            ctx->pc = 0x17C96Cu;
            goto label_17c96c;
        }
    }
    ctx->pc = 0x17C958u;
label_17c958:
    // 0x17c958: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17c958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17c95c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c960: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17C960u;
    SET_GPR_U32(ctx, 31, 0x17C968u);
    ctx->pc = 0x17C964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C960u;
    // 0x17c964: 0xa22501d3  sb          $a1, 0x1D3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17C960u, 0x17C968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C968u;
label_17c968:
    // 0x17c968: 0xa6200220  sh          $zero, 0x220($s1)
    ctx->pc = 0x17c968u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 0));
label_17c96c:
    // 0x17c96c: 0xae3001d4  sw          $s0, 0x1D4($s1)
    ctx->pc = 0x17c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 16));
label_17c970:
    // 0x17c970: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17c970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17c974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c97c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C97Cu;
        // 0x17c980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C984u;
}
