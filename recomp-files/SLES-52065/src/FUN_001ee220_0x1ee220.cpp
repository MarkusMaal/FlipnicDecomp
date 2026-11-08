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

// Function: FUN_001ee220
// Address: 0x1ee220 - 0x1ee280
void FUN_001ee220_0x1ee220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee220_0x1ee220");
#endif

    switch (ctx->pc) {
        case 0x1ee250u: goto label_1ee250;
        default: break;
    }

    ctx->pc = 0x1ee220u;

    // 0x1ee220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ee224: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ee228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ee22c: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1ee22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1ee230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ee230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ee234: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ee234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee238: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee23c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ee23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee240: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x1ee240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ee244: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x1ee244u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1ee248: 0xc07b714  jal         func_1EDC50
    ctx->pc = 0x1EE248u;
    SET_GPR_U32(ctx, 31, 0x1EE250u);
    ctx->pc = 0x1EE24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE248u;
    // 0x1ee24c: 0x8e09002c  lw          $t1, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC50u, 0x1EE248u, 0x1EE250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE250u;
label_1ee250:
    // 0x1ee250: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE250u;
    {
        const bool branch_taken_0x1ee250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE250u;
        // 0x1ee254: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee250) {
            ctx->pc = 0x1EE274u;
            goto label_1ee274;
        }
    }
    ctx->pc = 0x1EE258u;
    // 0x1ee258: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ee258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee25c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1ee25cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1ee260: 0x24a5e220  addiu       $a1, $a1, -0x1DE0
    ctx->pc = 0x1ee260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959648));
    // 0x1ee264: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee268: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1ee268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ee26c: 0x807ad00  j           func_1EB400
    ctx->pc = 0x1EE26Cu;
    ctx->pc = 0x1EE270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE26Cu;
    // 0x1ee270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB400u;
    iSetAlarm_0x1eb400(rdram, ctx, runtime); return;
    ctx->pc = 0x1EE274u;
label_1ee274:
    // 0x1ee274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee278: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE278u;
        // 0x1ee27c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE280u;
}
