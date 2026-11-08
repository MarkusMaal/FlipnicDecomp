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

// Function: FUN_00106280
// Address: 0x106280 - 0x106300
void FUN_00106280_0x106280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106280_0x106280");
#endif

    switch (ctx->pc) {
        case 0x1062ecu: goto label_1062ec;
        default: break;
    }

    ctx->pc = 0x106280u;

    // 0x106280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10628c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10628cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106290: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x106290u;
    {
        const bool branch_taken_0x106290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106290u;
        // 0x106294: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106290) {
            ctx->pc = 0x1062F0u;
            goto label_1062f0;
        }
    }
    ctx->pc = 0x106298u;
    // 0x106298: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10629c: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x10629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x1062a0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1062A0u;
    {
        const bool branch_taken_0x1062a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062A0u;
        // 0x1062a4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062a0) {
            ctx->pc = 0x1062D4u;
            goto label_1062d4;
        }
    }
    ctx->pc = 0x1062A8u;
    // 0x1062a8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1062a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1062ac: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x1062acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x1062b0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1062B0u;
    {
        const bool branch_taken_0x1062b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062B0u;
        // 0x1062b4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062b0) {
            ctx->pc = 0x1062D4u;
            goto label_1062d4;
        }
    }
    ctx->pc = 0x1062B8u;
    // 0x1062b8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1062b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1062bc: 0x24427cf0  addiu       $v0, $v0, 0x7CF0
    ctx->pc = 0x1062bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31984));
    // 0x1062c0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1062C0u;
    {
        const bool branch_taken_0x1062c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062C0u;
        // 0x1062c4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062c0) {
            ctx->pc = 0x1062D4u;
            goto label_1062d4;
        }
    }
    ctx->pc = 0x1062C8u;
    // 0x1062c8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1062c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1062cc: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x1062ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x1062d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1062d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1062d4:
    // 0x1062d4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1062d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1062d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1062d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1062dc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1062DCu;
    {
        const bool branch_taken_0x1062dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1062E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062DCu;
        // 0x1062e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062dc) {
            ctx->pc = 0x1062ECu;
            goto label_1062ec;
        }
    }
    ctx->pc = 0x1062E4u;
    // 0x1062e4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1062E4u;
    SET_GPR_U32(ctx, 31, 0x1062ECu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1062E4u, 0x1062ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062ECu;
label_1062ec:
    // 0x1062ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1062ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1062f0:
    // 0x1062f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1062f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1062f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1062f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1062f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1062F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1062FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062F8u;
        // 0x1062fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1062F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106300u;
}
