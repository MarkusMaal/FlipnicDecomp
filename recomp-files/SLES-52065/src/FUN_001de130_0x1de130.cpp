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

// Function: FUN_001de130
// Address: 0x1de130 - 0x1de19c
void FUN_001de130_0x1de130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001de130_0x1de130");
#endif

    switch (ctx->pc) {
        case 0x1de15cu: goto label_1de15c;
        default: break;
    }

    ctx->pc = 0x1de130u;

    // 0x1de130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de13c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1de13cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1de140: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de144: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1de144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1de148: 0x24217310  addiu       $at, $at, 0x7310
    ctx->pc = 0x1de148u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29456));
    // 0x1de14c: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x1de14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1de150: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de154: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DE154u;
    SET_GPR_U32(ctx, 31, 0x1DE15Cu);
    ctx->pc = 0x1DE158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE154u;
    // 0x1de158: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DE154u, 0x1DE15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE15Cu;
label_1de15c:
    // 0x1de15c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1de15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de160: 0x118827  nor         $s1, $zero, $s1
    ctx->pc = 0x1de160u;
    SET_GPR_U64(ctx, 17, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x1de164: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x1de164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x1de168: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE168u;
    {
        const bool branch_taken_0x1de168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE168u;
        // 0x1de16c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de168) {
            ctx->pc = 0x1DE188u;
            goto label_1de188;
        }
    }
    ctx->pc = 0x1DE170u;
    // 0x1de170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de174: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de17c: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1DE17Cu;
    ctx->pc = 0x1DE180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE17Cu;
    // 0x1de180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE184u;
    // 0x1de184: 0x0  nop
    ctx->pc = 0x1de184u;
    // NOP
label_1de188:
    // 0x1de188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de18c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de18cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de194: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE194u;
        // 0x1de198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE19Cu;
}
