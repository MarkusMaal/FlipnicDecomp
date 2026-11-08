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

// Function: entry_001b94bc
// Address: 0x1b94bc - 0x1b9584
void entry_001b94bc_0x1b94bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b94bc_0x1b94bc");
#endif

    switch (ctx->pc) {
        case 0x1b951cu: goto label_1b951c;
        case 0x1b9530u: goto label_1b9530;
        case 0x1b9544u: goto label_1b9544;
        case 0x1b9554u: goto label_1b9554;
        case 0x1b955cu: goto label_1b955c;
        case 0x1b9578u: goto label_1b9578;
        default: break;
    }

    ctx->pc = 0x1b94bcu;

    // 0x1b94bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b94bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b94c0: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x1b94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x1b94c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b94c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b94c8: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x1b94c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x1b94cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b94ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b94d0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b94d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1b94d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b94d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b94d8: 0x28a1000f  slti        $at, $a1, 0xF
    ctx->pc = 0x1b94d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1b94dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b94dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b94e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b94e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b94e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b94e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b94e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b94e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b94ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b94ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b94f0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1b94f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b94f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b94f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b94f8: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B94F8u;
    {
        const bool branch_taken_0x1b94f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94F8u;
        // 0x1b94fc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94f8) {
            ctx->pc = 0x1B9584u;
            return;
        }
    }
    ctx->pc = 0x1B9500u;
    // 0x1b9500: 0x0  nop
    ctx->pc = 0x1b9500u;
    // NOP
    // 0x1b9504: 0x0  nop
    ctx->pc = 0x1b9504u;
    // NOP
    // 0x1b9508: 0x4602a303  div.s       $f12, $f20, $f2
    ctx->pc = 0x1b9508u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
    // 0x1b950c: 0x0  nop
    ctx->pc = 0x1b950cu;
    // NOP
    // 0x1b9510: 0x0  nop
    ctx->pc = 0x1b9510u;
    // NOP
    // 0x1b9514: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9514u;
    SET_GPR_U32(ctx, 31, 0x1B951Cu);
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9514u, 0x1B951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B951Cu;
label_1b951c:
    // 0x1b951c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1b951cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1b9520: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b9520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b9524: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b9524u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1b9528: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1B9528u;
    SET_GPR_U32(ctx, 31, 0x1B9530u);
    ctx->pc = 0x1B952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9528u;
    // 0x1b952c: 0x24a52f00  addiu       $a1, $a1, 0x2F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1B9528u, 0x1B9530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9530u;
label_1b9530:
    // 0x1b9530: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b9530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9534: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b9534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b9538: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b953c: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1B953Cu;
    SET_GPR_U32(ctx, 31, 0x1B9544u);
    ctx->pc = 0x1B9540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B953Cu;
    // 0x1b9540: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1B953Cu, 0x1B9544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9544u;
label_1b9544:
    // 0x1b9544: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1b9544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1b9548: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1b9548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b954c: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1B954Cu;
    SET_GPR_U32(ctx, 31, 0x1B9554u);
    ctx->pc = 0x1B9550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B954Cu;
    // 0x1b9550: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1B954Cu, 0x1B9554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9554u;
label_1b9554:
    // 0x1b9554: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9554u;
    SET_GPR_U32(ctx, 31, 0x1B955Cu);
    ctx->pc = 0x1B9558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9554u;
    // 0x1b9558: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9554u, 0x1B955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B955Cu;
label_1b955c:
    // 0x1b955c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b955cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9560: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1b9560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1b9564: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9568: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b9568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b956c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b956cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b9570: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1B9570u;
    SET_GPR_U32(ctx, 31, 0x1B9578u);
    ctx->pc = 0x1B9574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9570u;
    // 0x1b9574: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1B9570u, 0x1B9578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9578u;
label_1b9578:
    // 0x1b9578: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b957c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B957Cu;
    {
        const bool branch_taken_0x1b957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B957Cu;
        // 0x1b9580: 0xae0300bc  sw          $v1, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b957c) {
            ctx->pc = 0x1B95B0u;
            return;
        }
    }
    ctx->pc = 0x1B9584u;
}
