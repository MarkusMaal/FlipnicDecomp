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

// Function: FUN_0020b358
// Address: 0x20b358 - 0x20b3cc
void FUN_0020b358_0x20b358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020b358_0x20b358");
#endif

    switch (ctx->pc) {
        case 0x20b36cu: goto label_20b36c;
        default: break;
    }

    ctx->pc = 0x20b358u;

    // 0x20b358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20b35c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20b360: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20b364: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x20B364u;
    SET_GPR_U32(ctx, 31, 0x20B36Cu);
    ctx->pc = 0x20B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B364u;
    // 0x20b368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x20B364u, 0x20B36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B36Cu;
label_20b36c:
    // 0x20b36c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x20b36cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x20b370: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x20b370u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x20b374: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x20b374u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x20b378: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x20b378u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x20b37c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x20b380: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x20b380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x20b384: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b388: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x20b388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x20b38c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x20b38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x20b390: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x20b390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x20b394: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x20b394u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3));
    // 0x20b398: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x20b398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x20b39c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x20b39cu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 16));
    // 0x20b3a0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x20b3a4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x20b3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x20b3a8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x20b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x20b3ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B3ACu;
    {
        const bool branch_taken_0x20b3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3ACu;
        // 0x20b3b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3ac) {
            ctx->pc = 0x20B3C0u;
            goto label_20b3c0;
        }
    }
    ctx->pc = 0x20B3B4u;
    // 0x20b3b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b3b8: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x20B3B8u;
    ctx->pc = 0x20B3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3B8u;
    // 0x20b3bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x20B3C0u;
label_20b3c0:
    // 0x20b3c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x20B3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3C4u;
        // 0x20b3c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B3CCu;
}
