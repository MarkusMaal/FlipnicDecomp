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

// Function: entry_00115cf0
// Address: 0x115cf0 - 0x115d54
void entry_00115cf0_0x115cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115cf0_0x115cf0");
#endif

    switch (ctx->pc) {
        case 0x115d1cu: goto label_115d1c;
        default: break;
    }

    ctx->pc = 0x115cf0u;

    // 0x115cf0: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x115cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x115cf4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x115cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115cf8: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x115cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x115cfc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x115cfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d00: 0x8ec20220  lw          $v0, 0x220($s6)
    ctx->pc = 0x115d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 544)));
    // 0x115d04: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x115d04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x115d08: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x115d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d0c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x115d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d10: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x115d10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d14: 0xc043e58  jal         func_10F960
    ctx->pc = 0x115D14u;
    SET_GPR_U32(ctx, 31, 0x115D1Cu);
    ctx->pc = 0x115D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D14u;
    // 0x115d18: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F960u, 0x115D14u, 0x115D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D1Cu;
label_115d1c:
    // 0x115d1c: 0x8ec30220  lw          $v1, 0x220($s6)
    ctx->pc = 0x115d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 544)));
    // 0x115d20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x115d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d24: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x115d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x115d28: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x115d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x115d2c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x115d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115d30: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x115d30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115d34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x115d34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115d38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x115d38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115d3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x115d3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115d40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x115d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x115d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x115d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x115D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D4Cu;
        // 0x115d50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115D54u;
}
