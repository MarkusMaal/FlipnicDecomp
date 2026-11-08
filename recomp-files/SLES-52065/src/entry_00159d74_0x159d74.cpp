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

// Function: entry_00159d74
// Address: 0x159d74 - 0x159dbc
void entry_00159d74_0x159d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159d74_0x159d74");
#endif

    switch (ctx->pc) {
        case 0x159d90u: goto label_159d90;
        case 0x159d9cu: goto label_159d9c;
        case 0x159db4u: goto label_159db4;
        default: break;
    }

    ctx->pc = 0x159d74u;

    // 0x159d74: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x159D74u;
    {
        const bool branch_taken_0x159d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x159d74) {
            ctx->pc = 0x159DBCu;
            return;
        }
    }
    ctx->pc = 0x159D7Cu;
    // 0x159d7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x159d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x159d80: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x159d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x159d84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x159d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x159d88: 0xc0425a4  jal         func_109690
    ctx->pc = 0x159D88u;
    SET_GPR_U32(ctx, 31, 0x159D90u);
    ctx->pc = 0x159D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D88u;
    // 0x159d8c: 0x8065002b  lb          $a1, 0x2B($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x159D88u, 0x159D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D90u;
label_159d90:
    // 0x159d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d94: 0xc042118  jal         func_108460
    ctx->pc = 0x159D94u;
    SET_GPR_U32(ctx, 31, 0x159D9Cu);
    ctx->pc = 0x159D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D94u;
    // 0x159d98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159D94u, 0x159D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D9Cu;
label_159d9c:
    // 0x159d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159da0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x159da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159da4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x159da4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x159da8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159dac: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x159DACu;
    SET_GPR_U32(ctx, 31, 0x159DB4u);
    ctx->pc = 0x159DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DACu;
    // 0x159db0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x159DACu, 0x159DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DB4u;
label_159db4:
    // 0x159db4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x159DB4u;
    {
        const bool branch_taken_0x159db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159db4) {
            ctx->pc = 0x159E48u;
            return;
        }
    }
    ctx->pc = 0x159DBCu;
}
