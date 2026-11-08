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

// Function: FUN_00209b68
// Address: 0x209b68 - 0x209be8
void FUN_00209b68_0x209b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209b68_0x209b68");
#endif

    switch (ctx->pc) {
        case 0x209b8cu: goto label_209b8c;
        case 0x209b98u: goto label_209b98;
        default: break;
    }

    ctx->pc = 0x209b68u;

    // 0x209b68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x209b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x209b6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x209b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x209b78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x209b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x209b7c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x209b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x209b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x209b84: 0xc08256e  jal         func_2095B8
    ctx->pc = 0x209B84u;
    SET_GPR_U32(ctx, 31, 0x209B8Cu);
    ctx->pc = 0x209B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B84u;
    // 0x209b88: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2095B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2095B8u, 0x209B84u, 0x209B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B8Cu;
label_209b8c:
    // 0x209b8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x209b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b90: 0xc082530  jal         func_2094C0
    ctx->pc = 0x209B90u;
    SET_GPR_U32(ctx, 31, 0x209B98u);
    ctx->pc = 0x209B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B90u;
    // 0x209b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2094C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2094C0u, 0x209B90u, 0x209B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B98u;
label_209b98:
    // 0x209b98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x209b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x209b9c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x209b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x209ba0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x209ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x209ba4: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x209BA4u;
    {
        const bool branch_taken_0x209ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x209ba4) {
            ctx->pc = 0x209BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209BA4u;
            // 0x209ba8: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209BACu;
            goto label_209bac;
        }
    }
    ctx->pc = 0x209BACu;
label_209bac:
    // 0x209bac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x209bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209bb0: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x209bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x209bb4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x209bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x209bb8: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x209bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x209bbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x209bc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x209bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209bc4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x209bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x209bc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x209bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209bcc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x209bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x209bd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x209bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209bd4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x209bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x209bd8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x209bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x209bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209be0: 0x3e00008  jr          $ra
    ctx->pc = 0x209BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BE0u;
        // 0x209be4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209BE8u;
}
