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

// Function: entry_00159ca8
// Address: 0x159ca8 - 0x159cec
void entry_00159ca8_0x159ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159ca8_0x159ca8");
#endif

    switch (ctx->pc) {
        case 0x159cc0u: goto label_159cc0;
        case 0x159cccu: goto label_159ccc;
        case 0x159ce4u: goto label_159ce4;
        default: break;
    }

    ctx->pc = 0x159ca8u;

    // 0x159ca8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x159ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x159cac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x159cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x159cb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x159cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x159cb4: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x159cb4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x159cb8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x159CB8u;
    SET_GPR_U32(ctx, 31, 0x159CC0u);
    ctx->pc = 0x159CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159CB8u;
    // 0x159cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x159CB8u, 0x159CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CC0u;
label_159cc0:
    // 0x159cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cc4: 0xc042118  jal         func_108460
    ctx->pc = 0x159CC4u;
    SET_GPR_U32(ctx, 31, 0x159CCCu);
    ctx->pc = 0x159CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159CC4u;
    // 0x159cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159CC4u, 0x159CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CCCu;
label_159ccc:
    // 0x159ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cd0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x159cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159cd4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x159cd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x159cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cdc: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x159CDCu;
    SET_GPR_U32(ctx, 31, 0x159CE4u);
    ctx->pc = 0x159CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159CDCu;
    // 0x159ce0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x159CDCu, 0x159CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CE4u;
label_159ce4:
    // 0x159ce4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x159CE4u;
    {
        const bool branch_taken_0x159ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CE4u;
        // 0x159ce8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ce4) {
            ctx->pc = 0x159E4Cu;
            return;
        }
    }
    ctx->pc = 0x159CECu;
}
