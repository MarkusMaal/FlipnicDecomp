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

// Function: entry_00159d28
// Address: 0x159d28 - 0x159d74
void entry_00159d28_0x159d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159d28_0x159d28");
#endif

    switch (ctx->pc) {
        case 0x159d48u: goto label_159d48;
        case 0x159d60u: goto label_159d60;
        case 0x159d6cu: goto label_159d6c;
        default: break;
    }

    ctx->pc = 0x159d28u;

    // 0x159d28: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x159d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x159d2c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x159D2Cu;
    {
        const bool branch_taken_0x159d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D2Cu;
        // 0x159d30: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d2c) {
            ctx->pc = 0x159D74u;
            return;
        }
    }
    ctx->pc = 0x159D34u;
    // 0x159d34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159d38: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x159d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d3c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x159d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x159d40: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x159D40u;
    SET_GPR_U32(ctx, 31, 0x159D48u);
    ctx->pc = 0x159D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D40u;
    // 0x159d44: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x159D40u, 0x159D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D48u;
label_159d48:
    // 0x159d48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x159d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x159d4c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x159d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x159d50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x159d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x159d54: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x159d54u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x159d58: 0xc0425a4  jal         func_109690
    ctx->pc = 0x159D58u;
    SET_GPR_U32(ctx, 31, 0x159D60u);
    ctx->pc = 0x159D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D58u;
    // 0x159d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x159D58u, 0x159D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D60u;
label_159d60:
    // 0x159d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d64: 0xc042118  jal         func_108460
    ctx->pc = 0x159D64u;
    SET_GPR_U32(ctx, 31, 0x159D6Cu);
    ctx->pc = 0x159D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D64u;
    // 0x159d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159D64u, 0x159D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D6Cu;
label_159d6c:
    // 0x159d6c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x159D6Cu;
    {
        const bool branch_taken_0x159d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159d6c) {
            ctx->pc = 0x159DFCu;
            return;
        }
    }
    ctx->pc = 0x159D74u;
}
