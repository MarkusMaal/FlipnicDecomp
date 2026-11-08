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

// Function: entry_0019a160
// Address: 0x19a160 - 0x19a194
void entry_0019a160_0x19a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a160_0x19a160");
#endif

    switch (ctx->pc) {
        case 0x19a168u: goto label_19a168;
        default: break;
    }

    ctx->pc = 0x19a160u;

    // 0x19a160: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x19A160u;
    SET_GPR_U32(ctx, 31, 0x19A168u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19A160u, 0x19A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A168u;
label_19a168:
    // 0x19a168: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19a168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a16c: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x19A16Cu;
    {
        const bool branch_taken_0x19a16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a16c) {
            ctx->pc = 0x19A1D8u;
            return;
        }
    }
    ctx->pc = 0x19A174u;
    // 0x19a174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a178: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19A178u;
    {
        const bool branch_taken_0x19a178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a178) {
            ctx->pc = 0x19A1ACu;
            return;
        }
    }
    ctx->pc = 0x19A180u;
    // 0x19a180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A180u;
    {
        const bool branch_taken_0x19a180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A180u;
        // 0x19a184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a180) {
            ctx->pc = 0x19A194u;
            return;
        }
    }
    ctx->pc = 0x19A188u;
    // 0x19a188: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19A188u;
    {
        const bool branch_taken_0x19a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A188u;
        // 0x19a18c: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a188) {
            ctx->pc = 0x19A1F0u;
            return;
        }
    }
    ctx->pc = 0x19A190u;
    // 0x19a190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19a194u;
}
