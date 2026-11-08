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

// Function: entry_0013378c
// Address: 0x13378c - 0x133808
void entry_0013378c_0x13378c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013378c_0x13378c");
#endif

    ctx->pc = 0x13378cu;

    // 0x13378c: 0x0  nop
    ctx->pc = 0x13378cu;
    // NOP
    // 0x133790: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x133790u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x133794: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x133794u;
    {
        const bool branch_taken_0x133794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x133798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133794u;
        // 0x133798: 0x3c053f80  lui         $a1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133794) {
            ctx->pc = 0x133774u;
            return;
        }
    }
    ctx->pc = 0x13379Cu;
    // 0x13379c: 0x3c033025  lui         $v1, 0x3025
    ctx->pc = 0x13379cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12325 << 16));
    // 0x1337a0: 0xae25002c  sw          $a1, 0x2C($s1)
    ctx->pc = 0x1337a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 5));
    // 0x1337a4: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x1337a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x1337a8: 0xae250028  sw          $a1, 0x28($s1)
    ctx->pc = 0x1337a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
    // 0x1337ac: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1337acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1337b0: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x1337b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x1337b4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1337b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1337b8: 0xae250020  sw          $a1, 0x20($s1)
    ctx->pc = 0x1337b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 5));
    // 0x1337bc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1337bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1337c0: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1337c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x1337c4: 0x24030512  addiu       $v1, $zero, 0x512
    ctx->pc = 0x1337c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1337c8: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x1337c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x1337cc: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1337ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x1337d0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1337d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x1337d4: 0xae3000a0  sw          $s0, 0xA0($s1)
    ctx->pc = 0x1337d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 16));
    // 0x1337d8: 0x962500a0  lhu         $a1, 0xA0($s1)
    ctx->pc = 0x1337d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1337dc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1337dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1337e0: 0xfe240090  sd          $a0, 0x90($s1)
    ctx->pc = 0x1337e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 144), GPR_U64(ctx, 4));
    // 0x1337e4: 0xfe230098  sd          $v1, 0x98($s1)
    ctx->pc = 0x1337e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 152), GPR_U64(ctx, 3));
    // 0x1337e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1337e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1337ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1337ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1337f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1337f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1337f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1337f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1337f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1337f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1337fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1337fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133800: 0x3e00008  jr          $ra
    ctx->pc = 0x133800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133800u;
        // 0x133804: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133808u;
}
