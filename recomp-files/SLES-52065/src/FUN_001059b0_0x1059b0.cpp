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

// Function: FUN_001059b0
// Address: 0x1059b0 - 0x105a20
void FUN_001059b0_0x1059b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001059b0_0x1059b0");
#endif

    switch (ctx->pc) {
        case 0x105a0cu: goto label_105a0c;
        default: break;
    }

    ctx->pc = 0x1059b0u;

    // 0x1059b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1059b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1059b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1059b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1059b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1059b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1059bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1059bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059c0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1059C0u;
    {
        const bool branch_taken_0x1059c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1059C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1059C0u;
        // 0x1059c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059c0) {
            ctx->pc = 0x105A10u;
            goto label_105a10;
        }
    }
    ctx->pc = 0x1059C8u;
    // 0x1059c8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1059c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1059cc: 0x2442a8b0  addiu       $v0, $v0, -0x5750
    ctx->pc = 0x1059ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
    // 0x1059d0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1059D0u;
    {
        const bool branch_taken_0x1059d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1059D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1059D0u;
        // 0x1059d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059d0) {
            ctx->pc = 0x1059F4u;
            goto label_1059f4;
        }
    }
    ctx->pc = 0x1059D8u;
    // 0x1059d8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1059d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1059dc: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1059dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1059e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1059E0u;
    {
        const bool branch_taken_0x1059e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1059E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1059E0u;
        // 0x1059e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059e0) {
            ctx->pc = 0x1059F4u;
            goto label_1059f4;
        }
    }
    ctx->pc = 0x1059E8u;
    // 0x1059e8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1059e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1059ec: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x1059ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x1059f0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1059f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1059f4:
    // 0x1059f4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1059f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1059f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1059f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1059fc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1059FCu;
    {
        const bool branch_taken_0x1059fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1059FCu;
        // 0x105a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059fc) {
            ctx->pc = 0x105A0Cu;
            goto label_105a0c;
        }
    }
    ctx->pc = 0x105A04u;
    // 0x105a04: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105A04u;
    SET_GPR_U32(ctx, 31, 0x105A0Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105A04u, 0x105A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A0Cu;
label_105a0c:
    // 0x105a0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105a10:
    // 0x105a10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105a18: 0x3e00008  jr          $ra
    ctx->pc = 0x105A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A18u;
        // 0x105a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105A20u;
}
