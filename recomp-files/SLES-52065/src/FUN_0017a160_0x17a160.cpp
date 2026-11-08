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

// Function: FUN_0017a160
// Address: 0x17a160 - 0x17a224
void FUN_0017a160_0x17a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017a160_0x17a160");
#endif

    switch (ctx->pc) {
        case 0x17a1a4u: goto label_17a1a4;
        case 0x17a1acu: goto label_17a1ac;
        case 0x17a1bcu: goto label_17a1bc;
        case 0x17a208u: goto label_17a208;
        default: break;
    }

    ctx->pc = 0x17a160u;

    // 0x17a160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a164: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17a168: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a16c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a178: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x17A178u;
    {
        const bool branch_taken_0x17a178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A178u;
        // 0x17a17c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a178) {
            ctx->pc = 0x17A208u;
            goto label_17a208;
        }
    }
    ctx->pc = 0x17A180u;
    // 0x17a180: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17a180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17a184: 0x2442aaf0  addiu       $v0, $v0, -0x5510
    ctx->pc = 0x17a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x17a188: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x17a188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x17a18c: 0x8f928630  lw          $s2, -0x79D0($gp)
    ctx->pc = 0x17a18cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x17a190: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17A190u;
    {
        const bool branch_taken_0x17a190 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A190u;
        // 0x17a194: 0x26240360  addiu       $a0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a190) {
            ctx->pc = 0x17A1B0u;
            goto label_17a1b0;
        }
    }
    ctx->pc = 0x17A198u;
    // 0x17a198: 0x26441620  addiu       $a0, $s2, 0x1620
    ctx->pc = 0x17a198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5664));
    // 0x17a19c: 0xc05c884  jal         func_172210
    ctx->pc = 0x17A19Cu;
    SET_GPR_U32(ctx, 31, 0x17A1A4u);
    ctx->pc = 0x17A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A19Cu;
    // 0x17a1a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172210u, 0x17A19Cu, 0x17A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A1A4u;
label_17a1a4:
    // 0x17a1a4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17A1A4u;
    SET_GPR_U32(ctx, 31, 0x17A1ACu);
    ctx->pc = 0x17A1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A1A4u;
    // 0x17a1a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17A1A4u, 0x17A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A1ACu;
label_17a1ac:
    // 0x17a1ac: 0x26240360  addiu       $a0, $s1, 0x360
    ctx->pc = 0x17a1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
label_17a1b0:
    // 0x17a1b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a1b4: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x17A1B4u;
    SET_GPR_U32(ctx, 31, 0x17A1BCu);
    ctx->pc = 0x17A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A1B4u;
    // 0x17a1b8: 0xaf808630  sw          $zero, -0x79D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936112), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x17A1B4u, 0x17A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A1BCu;
label_17a1bc:
    // 0x17a1bc: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x17A1BCu;
    {
        const bool branch_taken_0x17a1bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1BCu;
        // 0x17a1c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1bc) {
            ctx->pc = 0x17A1F4u;
            goto label_17a1f4;
        }
    }
    ctx->pc = 0x17A1C4u;
    // 0x17a1c4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17a1c8: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x17a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x17a1cc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17A1CCu;
    {
        const bool branch_taken_0x17a1cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1CCu;
        // 0x17a1d0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1cc) {
            ctx->pc = 0x17A1F0u;
            goto label_17a1f0;
        }
    }
    ctx->pc = 0x17A1D4u;
    // 0x17a1d4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17a1d8: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x17a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x17a1dc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A1DCu;
    {
        const bool branch_taken_0x17a1dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1DCu;
        // 0x17a1e0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1dc) {
            ctx->pc = 0x17A1F0u;
            goto label_17a1f0;
        }
    }
    ctx->pc = 0x17A1E4u;
    // 0x17a1e4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17a1e8: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x17a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x17a1ec: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x17a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_17a1f0:
    // 0x17a1f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17a1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_17a1f4:
    // 0x17a1f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17a1f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17a1f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A1F8u;
    {
        const bool branch_taken_0x17a1f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1F8u;
        // 0x17a1fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1f8) {
            ctx->pc = 0x17A20Cu;
            goto label_17a20c;
        }
    }
    ctx->pc = 0x17A200u;
    // 0x17a200: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17A200u;
    SET_GPR_U32(ctx, 31, 0x17A208u);
    ctx->pc = 0x17A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A200u;
    // 0x17a204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17A200u, 0x17A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A208u;
label_17a208:
    // 0x17a208: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17a208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a20c:
    // 0x17a20c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a210: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a21c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A21Cu;
        // 0x17a220: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A224u;
}
