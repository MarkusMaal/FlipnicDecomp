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

// Function: FUN_0017c3a0
// Address: 0x17c3a0 - 0x17c444
void FUN_0017c3a0_0x17c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c3a0_0x17c3a0");
#endif

    switch (ctx->pc) {
        case 0x17c3e0u: goto label_17c3e0;
        case 0x17c404u: goto label_17c404;
        case 0x17c410u: goto label_17c410;
        case 0x17c428u: goto label_17c428;
        default: break;
    }

    ctx->pc = 0x17c3a0u;

    // 0x17c3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c3a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17c3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17c3a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17c3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c3b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17c3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17c3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c3b8: 0x12050017  beq         $s0, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x17C3B8u;
    {
        const bool branch_taken_0x17c3b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x17C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3B8u;
        // 0x17c3bc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3b8) {
            ctx->pc = 0x17C418u;
            goto label_17c418;
        }
    }
    ctx->pc = 0x17C3C0u;
    // 0x17c3c0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C3C0u;
    {
        const bool branch_taken_0x17c3c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3C0u;
        // 0x17c3c4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3c0) {
            ctx->pc = 0x17C3E8u;
            goto label_17c3e8;
        }
    }
    ctx->pc = 0x17C3C8u;
    // 0x17c3c8: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C3C8u;
    {
        const bool branch_taken_0x17c3c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x17C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3C8u;
        // 0x17c3cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3c8) {
            ctx->pc = 0x17C3D8u;
            goto label_17c3d8;
        }
    }
    ctx->pc = 0x17C3D0u;
    // 0x17c3d0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x17C3D0u;
    {
        const bool branch_taken_0x17c3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3D0u;
        // 0x17c3d4: 0xae3001d4  sw          $s0, 0x1D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3d0) {
            ctx->pc = 0x17C430u;
            goto label_17c430;
        }
    }
    ctx->pc = 0x17C3D8u;
label_17c3d8:
    // 0x17c3d8: 0xc042570  jal         func_1095C0
    ctx->pc = 0x17C3D8u;
    SET_GPR_U32(ctx, 31, 0x17C3E0u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x17C3D8u, 0x17C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3E0u;
label_17c3e0:
    // 0x17c3e0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17C3E0u;
    {
        const bool branch_taken_0x17c3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c3e0) {
            ctx->pc = 0x17C42Cu;
            goto label_17c42c;
        }
    }
    ctx->pc = 0x17C3E8u;
label_17c3e8:
    // 0x17c3e8: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x17c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x17c3ec: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17C3ECu;
    {
        const bool branch_taken_0x17c3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x17c3ec) {
            ctx->pc = 0x17C410u;
            goto label_17c410;
        }
    }
    ctx->pc = 0x17C3F4u;
    // 0x17c3f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17c3f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c3fc: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17C3FCu;
    SET_GPR_U32(ctx, 31, 0x17C404u);
    ctx->pc = 0x17C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C3FCu;
    // 0x17c400: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17C3FCu, 0x17C404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C404u;
label_17c404:
    // 0x17c404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c408: 0xc042118  jal         func_108460
    ctx->pc = 0x17C408u;
    SET_GPR_U32(ctx, 31, 0x17C410u);
    ctx->pc = 0x17C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C408u;
    // 0x17c40c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x17C408u, 0x17C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C410u;
label_17c410:
    // 0x17c410: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17C410u;
    {
        const bool branch_taken_0x17c410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C410u;
        // 0x17c414: 0xa22001d3  sb          $zero, 0x1D3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c410) {
            ctx->pc = 0x17C42Cu;
            goto label_17c42c;
        }
    }
    ctx->pc = 0x17C418u;
label_17c418:
    // 0x17c418: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17c418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17c41c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c420: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17C420u;
    SET_GPR_U32(ctx, 31, 0x17C428u);
    ctx->pc = 0x17C424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C420u;
    // 0x17c424: 0xa22501d3  sb          $a1, 0x1D3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17C420u, 0x17C428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C428u;
label_17c428:
    // 0x17c428: 0xa6200210  sh          $zero, 0x210($s1)
    ctx->pc = 0x17c428u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 528), (uint16_t)GPR_U32(ctx, 0));
label_17c42c:
    // 0x17c42c: 0xae3001d4  sw          $s0, 0x1D4($s1)
    ctx->pc = 0x17c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 16));
label_17c430:
    // 0x17c430: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17c430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17c434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c43c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C43Cu;
        // 0x17c440: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C444u;
}
