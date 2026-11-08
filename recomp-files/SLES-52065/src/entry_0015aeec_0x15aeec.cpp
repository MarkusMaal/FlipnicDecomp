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

// Function: entry_0015aeec
// Address: 0x15aeec - 0x15af30
void entry_0015aeec_0x15aeec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aeec_0x15aeec");
#endif

    switch (ctx->pc) {
        case 0x15af28u: goto label_15af28;
        default: break;
    }

    ctx->pc = 0x15aeecu;

    // 0x15aeec: 0x8e23033c  lw          $v1, 0x33C($s1)
    ctx->pc = 0x15aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
    // 0x15aef0: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x15aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x15aef4: 0x9063000f  lbu         $v1, 0xF($v1)
    ctx->pc = 0x15aef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x15aef8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15AEF8u;
    {
        const bool branch_taken_0x15aef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEF8u;
        // 0x15aefc: 0x24020099  addiu       $v0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aef8) {
            ctx->pc = 0x15AF30u;
            return;
        }
    }
    ctx->pc = 0x15AF00u;
    // 0x15af00: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15AF00u;
    {
        const bool branch_taken_0x15af00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15af00) {
            ctx->pc = 0x15AF30u;
            return;
        }
    }
    ctx->pc = 0x15AF08u;
    // 0x15af08: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x15af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x15af0c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15AF0Cu;
    {
        const bool branch_taken_0x15af0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF0Cu;
        // 0x15af10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af0c) {
            ctx->pc = 0x15AF30u;
            return;
        }
    }
    ctx->pc = 0x15AF14u;
    // 0x15af14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15af14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af18: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15af18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15af1c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15af1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15af20: 0xc056a64  jal         func_15A990
    ctx->pc = 0x15AF20u;
    SET_GPR_U32(ctx, 31, 0x15AF28u);
    ctx->pc = 0x15AF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF20u;
    // 0x15af24: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A990u, 0x15AF20u, 0x15AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF28u;
label_15af28:
    // 0x15af28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15AF28u;
    {
        const bool branch_taken_0x15af28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF28u;
        // 0x15af2c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af28) {
            ctx->pc = 0x15AF54u;
            return;
        }
    }
    ctx->pc = 0x15AF30u;
}
