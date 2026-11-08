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

// Function: FUN_001ec058
// Address: 0x1ec058 - 0x1ec0d4
void FUN_001ec058_0x1ec058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec058_0x1ec058");
#endif

    switch (ctx->pc) {
        case 0x1ec090u: goto label_1ec090;
        case 0x1ec0a4u: goto label_1ec0a4;
        default: break;
    }

    ctx->pc = 0x1ec058u;

    // 0x1ec058: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec05c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ec05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ec060: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ec060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ec064: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ec064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec068: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ec068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ec06c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ec06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec074: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1ec074u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x1ec078: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ec078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ec07c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1ec07cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1ec080: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC080u;
    {
        const bool branch_taken_0x1ec080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec080) {
            ctx->pc = 0x1EC090u;
            goto label_1ec090;
        }
    }
    ctx->pc = 0x1EC088u;
    // 0x1ec088: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EC088u;
    SET_GPR_U32(ctx, 31, 0x1EC090u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EC088u, 0x1EC090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC090u;
label_1ec090:
    // 0x1ec090: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1ec090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1ec094: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x1ec094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x1ec098: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x1ec098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1ec09c: 0xc07afec  jal         func_1EBFB0
    ctx->pc = 0x1EC09Cu;
    SET_GPR_U32(ctx, 31, 0x1EC0A4u);
    ctx->pc = 0x1EC0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC09Cu;
    // 0x1ec0a0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBFB0u, 0x1EC09Cu, 0x1EC0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC0A4u;
label_1ec0a4:
    // 0x1ec0a4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC0A4u;
    {
        const bool branch_taken_0x1ec0a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC0A4u;
        // 0x1ec0a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec0a4) {
            ctx->pc = 0x1EC0C0u;
            goto label_1ec0c0;
        }
    }
    ctx->pc = 0x1EC0ACu;
    // 0x1ec0ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ec0acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec0b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ec0b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec0b8: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1EC0B8u;
    ctx->pc = 0x1EC0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC0B8u;
    // 0x1ec0bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1EC0C0u;
label_1ec0c0:
    // 0x1ec0c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ec0c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec0c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ec0c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec0c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec0c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC0CCu;
        // 0x1ec0d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC0D4u;
}
