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

// Function: FUN_00209ae8
// Address: 0x209ae8 - 0x209b64
void FUN_00209ae8_0x209ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209ae8_0x209ae8");
#endif

    switch (ctx->pc) {
        case 0x209b0cu: goto label_209b0c;
        case 0x209b18u: goto label_209b18;
        default: break;
    }

    ctx->pc = 0x209ae8u;

    // 0x209ae8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x209ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x209aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209af4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x209af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x209af8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x209af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x209afc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x209afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x209b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x209b04: 0xc08256e  jal         func_2095B8
    ctx->pc = 0x209B04u;
    SET_GPR_U32(ctx, 31, 0x209B0Cu);
    ctx->pc = 0x209B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B04u;
    // 0x209b08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2095B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2095B8u, 0x209B04u, 0x209B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B0Cu;
label_209b0c:
    // 0x209b0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x209b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b10: 0xc082530  jal         func_2094C0
    ctx->pc = 0x209B10u;
    SET_GPR_U32(ctx, 31, 0x209B18u);
    ctx->pc = 0x209B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B10u;
    // 0x209b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2094C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2094C0u, 0x209B10u, 0x209B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B18u;
label_209b18:
    // 0x209b18: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x209b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x209b1c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x209b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x209b20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x209b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x209b24: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x209B24u;
    {
        const bool branch_taken_0x209b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x209b24) {
            ctx->pc = 0x209B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209B24u;
            // 0x209b28: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209B2Cu;
            goto label_209b2c;
        }
    }
    ctx->pc = 0x209B2Cu;
label_209b2c:
    // 0x209b2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x209b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209b30: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x209b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x209b34: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x209b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x209b38: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x209b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x209b3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x209b40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x209b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209b44: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x209b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x209b48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x209b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209b4c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x209b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x209b50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x209b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209b54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x209b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x209b58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x209B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B5Cu;
        // 0x209b60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209B64u;
}
