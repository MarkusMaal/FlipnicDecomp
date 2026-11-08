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

// Function: entry_001670d4
// Address: 0x1670d4 - 0x16715c
void entry_001670d4_0x1670d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001670d4_0x1670d4");
#endif

    switch (ctx->pc) {
        case 0x1670ecu: goto label_1670ec;
        case 0x167118u: goto label_167118;
        case 0x167154u: goto label_167154;
        default: break;
    }

    ctx->pc = 0x1670d4u;

    // 0x1670d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1670d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1670d8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1670d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1670dc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1670dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1670e0: 0x8045002b  lb          $a1, 0x2B($v0)
    ctx->pc = 0x1670e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
    // 0x1670e4: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1670E4u;
    SET_GPR_U32(ctx, 31, 0x1670ECu);
    ctx->pc = 0x1670E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670E4u;
    // 0x1670e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1670E4u, 0x1670ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1670ECu;
label_1670ec:
    // 0x1670ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1670ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1670f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1670f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670f4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1670f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1670f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1670f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670fc: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x1670fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x167100: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x167100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x167104: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167108: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x167108u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16710c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x16710cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x167110: 0xc0425d4  jal         func_109750
    ctx->pc = 0x167110u;
    SET_GPR_U32(ctx, 31, 0x167118u);
    ctx->pc = 0x167114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167110u;
    // 0x167114: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x167110u, 0x167118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167118u;
label_167118:
    // 0x167118: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x167118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x16711c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167120: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x167120u;
    {
        const bool branch_taken_0x167120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167120) {
            ctx->pc = 0x16715Cu;
            return;
        }
    }
    ctx->pc = 0x167128u;
    // 0x167128: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x167128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16712c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x16712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x167130: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x167130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x167134: 0x3c053e4c  lui         $a1, 0x3E4C
    ctx->pc = 0x167134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15948 << 16));
    // 0x167138: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x167138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x16713c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16713cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167144: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x167144u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167148: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x167148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16714c: 0xc056194  jal         func_158650
    ctx->pc = 0x16714Cu;
    SET_GPR_U32(ctx, 31, 0x167154u);
    ctx->pc = 0x167150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16714Cu;
    // 0x167150: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x16714Cu, 0x167154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167154u;
label_167154:
    // 0x167154: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x167154u;
    {
        const bool branch_taken_0x167154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167154u;
        // 0x167158: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167154) {
            ctx->pc = 0x16718Cu;
            return;
        }
    }
    ctx->pc = 0x16715Cu;
}
