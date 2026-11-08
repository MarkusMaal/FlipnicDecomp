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

// Function: FUN_001f7258
// Address: 0x1f7258 - 0x1f72d0
void FUN_001f7258_0x1f7258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7258_0x1f7258");
#endif

    switch (ctx->pc) {
        case 0x1f727cu: goto label_1f727c;
        case 0x1f7298u: goto label_1f7298;
        case 0x1f72a8u: goto label_1f72a8;
        default: break;
    }

    ctx->pc = 0x1f7258u;

    // 0x1f7258: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f7258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f725c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f725cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f7260: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f7260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f7264: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1f7264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7268: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1f7268u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1f726c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f726cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7270: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f7270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f7274: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1F7274u;
    SET_GPR_U32(ctx, 31, 0x1F727Cu);
    ctx->pc = 0x1F7278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7274u;
    // 0x1f7278: 0xae32bb24  sw          $s2, -0x44DC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294949668), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1F7274u, 0x1F727Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F727Cu;
label_1f727c:
    // 0x1f727c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1f727cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1f7280: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1f7280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1f7284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f7284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7288: 0x24a57218  addiu       $a1, $a1, 0x7218
    ctx->pc = 0x1f7288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29208));
    // 0x1f728c: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x1f728cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    // 0x1f7290: 0xc07b6a0  jal         func_1EDA80
    ctx->pc = 0x1F7290u;
    SET_GPR_U32(ctx, 31, 0x1F7298u);
    ctx->pc = 0x1F7294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7290u;
    // 0x1f7294: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDA80u, 0x1F7290u, 0x1F7298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7298u;
label_1f7298:
    // 0x1f7298: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7298u;
    {
        const bool branch_taken_0x1f7298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7298u;
        // 0x1f729c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7298) {
            ctx->pc = 0x1F72ACu;
            goto label_1f72ac;
        }
    }
    ctx->pc = 0x1F72A0u;
    // 0x1f72a0: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1F72A0u;
    SET_GPR_U32(ctx, 31, 0x1F72A8u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1F72A0u, 0x1F72A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F72A8u;
label_1f72a8:
    // 0x1f72a8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1f72ac:
    // 0x1f72ac: 0xae20bb24  sw          $zero, -0x44DC($s1)
    ctx->pc = 0x1f72acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294949668), GPR_U32(ctx, 0));
    // 0x1f72b0: 0xac52bb40  sw          $s2, -0x44C0($v0)
    ctx->pc = 0x1f72b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949696), GPR_U32(ctx, 18));
    // 0x1f72b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f72b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f72b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f72b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f72bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f72bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f72c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f72c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f72c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f72c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f72c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F72C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F72C8u;
        // 0x1f72cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F72C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F72D0u;
}
