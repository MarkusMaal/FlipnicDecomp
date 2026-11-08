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

// Function: FUN_00209948
// Address: 0x209948 - 0x2099b0
void FUN_00209948_0x209948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209948_0x209948");
#endif

    switch (ctx->pc) {
        case 0x209964u: goto label_209964;
        case 0x209970u: goto label_209970;
        default: break;
    }

    ctx->pc = 0x209948u;

    // 0x209948: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20994c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20994cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209950: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209954: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x209954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x209958: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x209958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20995c: 0xc08256e  jal         func_2095B8
    ctx->pc = 0x20995Cu;
    SET_GPR_U32(ctx, 31, 0x209964u);
    ctx->pc = 0x209960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20995Cu;
    // 0x209960: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2095B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2095B8u, 0x20995Cu, 0x209964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209964u;
label_209964:
    // 0x209964: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x209964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209968: 0xc082530  jal         func_2094C0
    ctx->pc = 0x209968u;
    SET_GPR_U32(ctx, 31, 0x209970u);
    ctx->pc = 0x20996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209968u;
    // 0x20996c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2094C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2094C0u, 0x209968u, 0x209970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209970u;
label_209970:
    // 0x209970: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x209970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x209974: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x209974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x209978: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x209978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20997c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x20997Cu;
    {
        const bool branch_taken_0x20997c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20997c) {
            ctx->pc = 0x209980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20997Cu;
            // 0x209980: 0xae110030  sw          $s1, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209984u;
            goto label_209984;
        }
    }
    ctx->pc = 0x209984u;
label_209984:
    // 0x209984: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x209984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209988: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x209988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x20998c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x20998cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x209990: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x209994: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209998: 0x34420105  ori         $v0, $v0, 0x105
    ctx->pc = 0x209998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
    // 0x20999c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20999cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2099a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2099a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2099a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2099a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2099a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2099A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2099ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099A8u;
        // 0x2099ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2099A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2099B0u;
}
