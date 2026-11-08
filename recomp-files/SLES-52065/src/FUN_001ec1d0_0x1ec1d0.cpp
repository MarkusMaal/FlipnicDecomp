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

// Function: FUN_001ec1d0
// Address: 0x1ec1d0 - 0x1ec238
void FUN_001ec1d0_0x1ec1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec1d0_0x1ec1d0");
#endif

    switch (ctx->pc) {
        case 0x1ec200u: goto label_1ec200;
        case 0x1ec208u: goto label_1ec208;
        case 0x1ec220u: goto label_1ec220;
        default: break;
    }

    ctx->pc = 0x1ec1d0u;

    // 0x1ec1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ec1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ec1d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ec1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ec1d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ec1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ec1dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec1dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec1e4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1ec1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x1ec1e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ec1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ec1ec: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1ec1ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1ec1f0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC1F0u;
    {
        const bool branch_taken_0x1ec1f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec1f0) {
            ctx->pc = 0x1EC200u;
            goto label_1ec200;
        }
    }
    ctx->pc = 0x1EC1F8u;
    // 0x1ec1f8: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EC1F8u;
    SET_GPR_U32(ctx, 31, 0x1EC200u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EC1F8u, 0x1EC200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC200u;
label_1ec200:
    // 0x1ec200: 0xc07ace4  jal         func_1EB390
    ctx->pc = 0x1EC200u;
    SET_GPR_U32(ctx, 31, 0x1EC208u);
    ctx->pc = 0x1EC204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC200u;
    // 0x1ec204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB390u, 0x1EC200u, 0x1EC208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC208u;
label_1ec208:
    // 0x1ec208: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec20c: 0xf  sync
    ctx->pc = 0x1ec20cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec210: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC210u;
    {
        const bool branch_taken_0x1ec210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC210u;
        // 0x1ec214: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec210) {
            ctx->pc = 0x1EC224u;
            goto label_1ec224;
        }
    }
    ctx->pc = 0x1EC218u;
    // 0x1ec218: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EC218u;
    SET_GPR_U32(ctx, 31, 0x1EC220u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EC218u, 0x1EC220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC220u;
label_1ec220:
    // 0x1ec220: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ec220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec224:
    // 0x1ec224: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ec224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec228: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ec228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec22c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec22cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec230: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC230u;
        // 0x1ec234: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC238u;
}
