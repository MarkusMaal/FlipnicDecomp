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

// Function: entry_0016e87c
// Address: 0x16e87c - 0x16e8e4
void entry_0016e87c_0x16e87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e87c_0x16e87c");
#endif

    switch (ctx->pc) {
        case 0x16e8c4u: goto label_16e8c4;
        default: break;
    }

    ctx->pc = 0x16e87cu;

label_16e87c:
    // 0x16e87c: 0x8ea20210  lw          $v0, 0x210($s5)
    ctx->pc = 0x16e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 528)));
label_16e880:
    // 0x16e880: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x16e880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_16e884:
    // 0x16e884: 0x84420080  lh          $v0, 0x80($v0)
    ctx->pc = 0x16e884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_16e888:
    // 0x16e888: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
label_16e88c:
    if (ctx->pc == 0x16E88Cu) {
        ctx->pc = 0x16E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E888u;
        // 0x16e88c: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E890u;
        goto label_16e890;
    }
    ctx->pc = 0x16E888u;
    {
        const bool branch_taken_0x16e888 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E888u;
        // 0x16e88c: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e888) {
            ctx->pc = 0x16E91Cu;
            return;
        }
    }
    ctx->pc = 0x16E890u;
label_16e890:
    // 0x16e890: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16e890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16e894:
    // 0x16e894: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16e898:
    // 0x16e898: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16e898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16e89c:
    // 0x16e89c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e8a0:
    // 0x16e8a0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e8a4:
    // 0x16e8a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e8a8:
    // 0x16e8a8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16e8ac:
    // 0x16e8ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e8b0:
    // 0x16e8b0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16e8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e8b4:
    // 0x16e8b4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e8b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e8b8:
    // 0x16e8b8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16e8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16e8bc:
    // 0x16e8bc: 0x320f809  jalr        $t9
label_16e8c0:
    if (ctx->pc == 0x16E8C0u) {
        ctx->pc = 0x16E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8BCu;
        // 0x16e8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E8C4u;
        goto label_16e8c4;
    }
    ctx->pc = 0x16E8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E8C4u);
        ctx->pc = 0x16E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8BCu;
        // 0x16e8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E8BCu, 0x16E8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E8C4u;
label_16e8c4:
    // 0x16e8c4: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
label_16e8c8:
    if (ctx->pc == 0x16E8C8u) {
        ctx->pc = 0x16E8CCu;
        goto label_16e8cc;
    }
    ctx->pc = 0x16E8C4u;
    {
        const bool branch_taken_0x16e8c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e8c4) {
            ctx->pc = 0x16E91Cu;
            return;
        }
    }
    ctx->pc = 0x16E8CCu;
label_16e8cc:
    // 0x16e8cc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x16e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_16e8d0:
    // 0x16e8d0: 0x80620024  lb          $v0, 0x24($v1)
    ctx->pc = 0x16e8d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16e8d4:
    // 0x16e8d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16e8d8:
    if (ctx->pc == 0x16E8D8u) {
        ctx->pc = 0x16E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8D4u;
        // 0x16e8d8: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E8DCu;
        goto label_16e8dc;
    }
    ctx->pc = 0x16E8D4u;
    {
        const bool branch_taken_0x16e8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8D4u;
        // 0x16e8d8: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8d4) {
            ctx->pc = 0x16E8E4u;
            return;
        }
    }
    ctx->pc = 0x16E8DCu;
label_16e8dc:
    // 0x16e8dc: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x16e8dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16e8e0:
    // 0x16e8e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x16e8e4u;
}
