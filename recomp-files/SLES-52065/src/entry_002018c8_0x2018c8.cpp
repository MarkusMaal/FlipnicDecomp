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

// Function: entry_002018c8
// Address: 0x2018c8 - 0x201908
void entry_002018c8_0x2018c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002018c8_0x2018c8");
#endif

    switch (ctx->pc) {
        case 0x2018e8u: goto label_2018e8;
        default: break;
    }

    ctx->pc = 0x2018c8u;

    // 0x2018c8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2018c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2018cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2018ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018d0: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x2018d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2018d4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2018d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018d8: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x2018d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x2018dc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2018dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2018e0: 0xc0817f4  jal         func_205FD0
    ctx->pc = 0x2018E0u;
    SET_GPR_U32(ctx, 31, 0x2018E8u);
    ctx->pc = 0x2018E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018E0u;
    // 0x2018e4: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205FD0u, 0x2018E0u, 0x2018E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018E8u;
label_2018e8:
    // 0x2018e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2018e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2018ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2018ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2018f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2018f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2018f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2018f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2018f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2018f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2018fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2018fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201900: 0x3e00008  jr          $ra
    ctx->pc = 0x201900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201900u;
        // 0x201904: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201908u;
}
