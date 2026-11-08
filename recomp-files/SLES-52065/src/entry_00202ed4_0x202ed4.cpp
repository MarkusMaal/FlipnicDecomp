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

// Function: entry_00202ed4
// Address: 0x202ed4 - 0x202f48
void entry_00202ed4_0x202ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202ed4_0x202ed4");
#endif

    switch (ctx->pc) {
        case 0x202ee4u: goto label_202ee4;
        case 0x202f04u: goto label_202f04;
        case 0x202f18u: goto label_202f18;
        case 0x202f28u: goto label_202f28;
        default: break;
    }

    ctx->pc = 0x202ed4u;

    // 0x202ed4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x202ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202ed8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x202ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x202edc: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x202EDCu;
    SET_GPR_U32(ctx, 31, 0x202EE4u);
    ctx->pc = 0x202EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EDCu;
    // 0x202ee0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x202EDCu, 0x202EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EE4u;
label_202ee4:
    // 0x202ee4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202ee8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x202ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x202eec: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x202eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x202ef0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x202ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x202ef4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x202ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x202ef8: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x202ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x202efc: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x202EFCu;
    SET_GPR_U32(ctx, 31, 0x202F04u);
    ctx->pc = 0x202F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EFCu;
    // 0x202f00: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x202EFCu, 0x202F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F04u;
label_202f04:
    // 0x202f04: 0x8fa70044  lw          $a3, 0x44($sp)
    ctx->pc = 0x202f04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x202f08: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f10: 0xc0801fa  jal         func_2007E8
    ctx->pc = 0x202F10u;
    SET_GPR_U32(ctx, 31, 0x202F18u);
    ctx->pc = 0x202F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F10u;
    // 0x202f14: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2007E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2007E8u, 0x202F10u, 0x202F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F18u;
label_202f18:
    // 0x202f18: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x202f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x202f1c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f20: 0xc07ffc0  jal         func_1FFF00
    ctx->pc = 0x202F20u;
    SET_GPR_U32(ctx, 31, 0x202F28u);
    ctx->pc = 0x202F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F20u;
    // 0x202f24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF00u, 0x202F20u, 0x202F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F28u;
label_202f28:
    // 0x202f28: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x202f28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202f2c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202F2Cu;
    {
        const bool branch_taken_0x202f2c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x202F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F2Cu;
        // 0x202f30: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f2c) {
            ctx->pc = 0x202F48u;
            return;
        }
    }
    ctx->pc = 0x202F34u;
    // 0x202f34: 0x8fb0004c  lw          $s0, 0x4C($sp)
    ctx->pc = 0x202f34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x202f38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x202f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x202f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x202F40u;
    {
        const bool branch_taken_0x202f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F40u;
        // 0x202f44: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f40) {
            ctx->pc = 0x202F5Cu;
            return;
        }
    }
    ctx->pc = 0x202F48u;
}
