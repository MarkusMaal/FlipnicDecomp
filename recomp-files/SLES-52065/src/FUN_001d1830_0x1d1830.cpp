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

// Function: FUN_001d1830
// Address: 0x1d1830 - 0x1d18cc
void FUN_001d1830_0x1d1830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1830_0x1d1830");
#endif

    switch (ctx->pc) {
        case 0x1d1864u: goto label_1d1864;
        case 0x1d18a8u: goto label_1d18a8;
        case 0x1d18bcu: goto label_1d18bc;
        default: break;
    }

    ctx->pc = 0x1d1830u;

    // 0x1d1830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d183c: 0x908201e0  lbu         $v0, 0x1E0($a0)
    ctx->pc = 0x1d183cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x1d1840: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D1840u;
    {
        const bool branch_taken_0x1d1840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1840u;
        // 0x1d1844: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1840) {
            ctx->pc = 0x1D18B0u;
            goto label_1d18b0;
        }
    }
    ctx->pc = 0x1D1848u;
    // 0x1d1848: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d1848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d184c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d184cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d1850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1854: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d1854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d1858: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1d1858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d185c: 0xc07e2d2  jal         func_1F8B48
    ctx->pc = 0x1D185Cu;
    SET_GPR_U32(ctx, 31, 0x1D1864u);
    ctx->pc = 0x1D1860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D185Cu;
    // 0x1d1860: 0x24460024  addiu       $a2, $v0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8B48u, 0x1D185Cu, 0x1D1864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1864u;
label_1d1864:
    // 0x1d1864: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d1864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1868: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D1868u;
    {
        const bool branch_taken_0x1d1868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1868u;
        // 0x1d186c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1868) {
            ctx->pc = 0x1D18B4u;
            goto label_1d18b4;
        }
    }
    ctx->pc = 0x1D1870u;
    // 0x1d1870: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1874: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1874u;
    {
        const bool branch_taken_0x1d1874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1874) {
            ctx->pc = 0x1D188Cu;
            goto label_1d188c;
        }
    }
    ctx->pc = 0x1D187Cu;
    // 0x1d187c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D187Cu;
    {
        const bool branch_taken_0x1d187c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d187c) {
            ctx->pc = 0x1D18B0u;
            goto label_1d18b0;
        }
    }
    ctx->pc = 0x1D1884u;
    // 0x1d1884: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D1884u;
    {
        const bool branch_taken_0x1d1884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1884) {
            ctx->pc = 0x1D18B0u;
            goto label_1d18b0;
        }
    }
    ctx->pc = 0x1D188Cu;
label_1d188c:
    // 0x1d188c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d1890: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d1890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1898: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d1898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d189c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d18a0: 0xc074634  jal         func_1D18D0
    ctx->pc = 0x1D18A0u;
    SET_GPR_U32(ctx, 31, 0x1D18A8u);
    ctx->pc = 0x1D18A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D18A0u;
    // 0x1d18a4: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18D0u, 0x1D18A0u, 0x1D18A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18A8u;
label_1d18a8:
    // 0x1d18a8: 0xa20001e0  sb          $zero, 0x1E0($s0)
    ctx->pc = 0x1d18a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 480), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d18ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d18acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1d18b0:
    // 0x1d18b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d18b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d18b4:
    // 0x1d18b4: 0xc0746e0  jal         func_1D1B80
    ctx->pc = 0x1D18B4u;
    SET_GPR_U32(ctx, 31, 0x1D18BCu);
    ctx->pc = 0x1D1B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1B80u, 0x1D18B4u, 0x1D18BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18BCu;
label_1d18bc:
    // 0x1d18bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d18bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d18c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d18c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d18c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D18C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D18C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18C4u;
        // 0x1d18c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D18C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D18CCu;
}
