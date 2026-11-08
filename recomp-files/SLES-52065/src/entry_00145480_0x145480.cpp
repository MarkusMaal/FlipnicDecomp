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

// Function: entry_00145480
// Address: 0x145480 - 0x1454cc
void entry_00145480_0x145480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145480_0x145480");
#endif

    switch (ctx->pc) {
        case 0x1454b0u: goto label_1454b0;
        case 0x1454bcu: goto label_1454bc;
        default: break;
    }

    ctx->pc = 0x145480u;

    // 0x145480: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x145480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x145484: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x145484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145488: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x145488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x14548c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14548cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145490: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x145490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x145494: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x145494u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x145498: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x145498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14549c: 0x8cf00004  lw          $s0, 0x4($a3)
    ctx->pc = 0x14549cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1454a0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1454a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1454a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1454a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1454a8: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1454A8u;
    SET_GPR_U32(ctx, 31, 0x1454B0u);
    ctx->pc = 0x1454ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1454A8u;
    // 0x1454ac: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1454A8u, 0x1454B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454B0u;
label_1454b0:
    // 0x1454b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1454b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1454b4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1454B4u;
    SET_GPR_U32(ctx, 31, 0x1454BCu);
    ctx->pc = 0x1454B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1454B4u;
    // 0x1454b8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1454B4u, 0x1454BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454BCu;
label_1454bc:
    // 0x1454bc: 0x8fb20064  lw          $s2, 0x64($sp)
    ctx->pc = 0x1454bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1454c0: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1454c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1454c4: 0x1250000e  beq         $s2, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1454C4u;
    {
        const bool branch_taken_0x1454c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x1454C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454C4u;
        // 0x1454c8: 0x8fb10060  lw          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454c4) {
            ctx->pc = 0x145500u;
            return;
        }
    }
    ctx->pc = 0x1454CCu;
}
