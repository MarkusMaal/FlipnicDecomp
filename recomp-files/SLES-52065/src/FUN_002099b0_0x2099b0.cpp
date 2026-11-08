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

// Function: FUN_002099b0
// Address: 0x2099b0 - 0x209a24
void FUN_002099b0_0x2099b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002099b0_0x2099b0");
#endif

    switch (ctx->pc) {
        case 0x2099d4u: goto label_2099d4;
        case 0x2099e0u: goto label_2099e0;
        default: break;
    }

    ctx->pc = 0x2099b0u;

    // 0x2099b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2099b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2099b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2099b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2099b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2099b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2099bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2099c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2099c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2099c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2099c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2099c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2099cc: 0xc08256e  jal         func_2095B8
    ctx->pc = 0x2099CCu;
    SET_GPR_U32(ctx, 31, 0x2099D4u);
    ctx->pc = 0x2099D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2099CCu;
    // 0x2099d0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2095B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2095B8u, 0x2099CCu, 0x2099D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099D4u;
label_2099d4:
    // 0x2099d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2099d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099d8: 0xc082530  jal         func_2094C0
    ctx->pc = 0x2099D8u;
    SET_GPR_U32(ctx, 31, 0x2099E0u);
    ctx->pc = 0x2099DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2099D8u;
    // 0x2099dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2094C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2094C0u, 0x2099D8u, 0x2099E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099E0u;
label_2099e0:
    // 0x2099e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2099e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2099e4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2099e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2099e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2099e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2099ec: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2099ECu;
    {
        const bool branch_taken_0x2099ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2099ec) {
            ctx->pc = 0x2099F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2099ECu;
            // 0x2099f0: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2099F4u;
            goto label_2099f4;
        }
    }
    ctx->pc = 0x2099F4u;
label_2099f4:
    // 0x2099f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2099f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2099f8: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x2099f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x2099fc: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x2099fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x209a00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x209a04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x209a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209a08: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x209a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x209a0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x209a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209a10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x209a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x209a14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x209a14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x209A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A1Cu;
        // 0x209a20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209A24u;
}
