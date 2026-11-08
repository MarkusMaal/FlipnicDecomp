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

// Function: FUN_0015bdb0
// Address: 0x15bdb0 - 0x15be20
void FUN_0015bdb0_0x15bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015bdb0_0x15bdb0");
#endif

    switch (ctx->pc) {
        case 0x15be0cu: goto label_15be0c;
        default: break;
    }

    ctx->pc = 0x15bdb0u;

    // 0x15bdb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15bdb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15bdb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15bdbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15bdbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdc0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x15BDC0u;
    {
        const bool branch_taken_0x15bdc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDC0u;
        // 0x15bdc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bdc0) {
            ctx->pc = 0x15BE10u;
            goto label_15be10;
        }
    }
    ctx->pc = 0x15BDC8u;
    // 0x15bdc8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15bdcc: 0x24429590  addiu       $v0, $v0, -0x6A70
    ctx->pc = 0x15bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940048));
    // 0x15bdd0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15BDD0u;
    {
        const bool branch_taken_0x15bdd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDD0u;
        // 0x15bdd4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bdd0) {
            ctx->pc = 0x15BDF4u;
            goto label_15bdf4;
        }
    }
    ctx->pc = 0x15BDD8u;
    // 0x15bdd8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15bddc: 0x244295f0  addiu       $v0, $v0, -0x6A10
    ctx->pc = 0x15bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940144));
    // 0x15bde0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BDE0u;
    {
        const bool branch_taken_0x15bde0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDE0u;
        // 0x15bde4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bde0) {
            ctx->pc = 0x15BDF4u;
            goto label_15bdf4;
        }
    }
    ctx->pc = 0x15BDE8u;
    // 0x15bde8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15bdec: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x15bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x15bdf0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x15bdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_15bdf4:
    // 0x15bdf4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x15bdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x15bdf8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15bdf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15bdfc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BDFCu;
    {
        const bool branch_taken_0x15bdfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDFCu;
        // 0x15be00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bdfc) {
            ctx->pc = 0x15BE0Cu;
            goto label_15be0c;
        }
    }
    ctx->pc = 0x15BE04u;
    // 0x15be04: 0xc0401a4  jal         func_100690
    ctx->pc = 0x15BE04u;
    SET_GPR_U32(ctx, 31, 0x15BE0Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x15BE04u, 0x15BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE0Cu;
label_15be0c:
    // 0x15be0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15be0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15be10:
    // 0x15be10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15be10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15be14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15be14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15be18: 0x3e00008  jr          $ra
    ctx->pc = 0x15BE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE18u;
        // 0x15be1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BE20u;
}
