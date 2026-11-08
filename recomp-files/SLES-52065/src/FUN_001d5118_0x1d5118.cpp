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

// Function: FUN_001d5118
// Address: 0x1d5118 - 0x1d5194
void FUN_001d5118_0x1d5118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d5118_0x1d5118");
#endif

    switch (ctx->pc) {
        case 0x1d5134u: goto label_1d5134;
        default: break;
    }

    ctx->pc = 0x1d5118u;

    // 0x1d5118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d511c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d511cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5124: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d512c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D512Cu;
    SET_GPR_U32(ctx, 31, 0x1D5134u);
    ctx->pc = 0x1D5130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D512Cu;
    // 0x1d5130: 0x30b100ff  andi        $s1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D512Cu, 0x1D5134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5134u;
label_1d5134:
    // 0x1d5134: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d5134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5138: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x1d5138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1d513c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d5140: 0x242105b0  addiu       $at, $at, 0x5B0
    ctx->pc = 0x1d5140u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 1456));
    // 0x1d5144: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x1d5144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1d5148: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1d5148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1d514c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d514cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d5150: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x1d5150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d5154: 0x8e040200  lw          $a0, 0x200($s0)
    ctx->pc = 0x1d5154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1d5158: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d5158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d515c: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x1d515cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x1d5160: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5160u;
    {
        const bool branch_taken_0x1d5160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5160u;
        // 0x1d5164: 0xae040200  sw          $a0, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5160) {
            ctx->pc = 0x1D5180u;
            goto label_1d5180;
        }
    }
    ctx->pc = 0x1D5168u;
    // 0x1d5168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d516c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d516cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5174: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1D5174u;
    ctx->pc = 0x1D5178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5174u;
    // 0x1d5178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D517Cu;
    // 0x1d517c: 0x0  nop
    ctx->pc = 0x1d517cu;
    // NOP
label_1d5180:
    // 0x1d5180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d518c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D518Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D518Cu;
        // 0x1d5190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D518Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5194u;
}
