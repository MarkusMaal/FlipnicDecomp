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

// Function: entry_0018d87c
// Address: 0x18d87c - 0x18d918
void entry_0018d87c_0x18d87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d87c_0x18d87c");
#endif

    switch (ctx->pc) {
        case 0x18d904u: goto label_18d904;
        case 0x18d910u: goto label_18d910;
        default: break;
    }

    ctx->pc = 0x18d87cu;

    // 0x18d87c: 0x146002b4  bnez        $v1, . + 4 + (0x2B4 << 2)
    ctx->pc = 0x18D87Cu;
    {
        const bool branch_taken_0x18d87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d87c) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
    ctx->pc = 0x18D884u;
    // 0x18d884: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x18d884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18d888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d88c: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18d88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18d890: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d894: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d894u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d898: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18d89c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d8a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18d8a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18d8a8: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x18d8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d8ac: 0xe62004f0  swc1        $f0, 0x4F0($s1)
    ctx->pc = 0x18d8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1264), bits); }
    // 0x18d8b0: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x18d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18d8b4: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18d8b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d8bc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d8c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18d8c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d8c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18d8cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18d8d0: 0xc4400084  lwc1        $f0, 0x84($v0)
    ctx->pc = 0x18d8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d8d4: 0xe62004f4  swc1        $f0, 0x4F4($s1)
    ctx->pc = 0x18d8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1268), bits); }
    // 0x18d8d8: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x18d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18d8dc: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18d8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18d8e0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d8e4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d8e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18d8ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d8f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18d8f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18d8f8: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x18d8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d8fc: 0xc063220  jal         func_18C880
    ctx->pc = 0x18D8FCu;
    SET_GPR_U32(ctx, 31, 0x18D904u);
    ctx->pc = 0x18D900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8FCu;
    // 0x18d900: 0xe62004f8  swc1        $f0, 0x4F8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C880u, 0x18D8FCu, 0x18D904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D904u;
label_18d904:
    // 0x18d904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d908: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18D908u;
    SET_GPR_U32(ctx, 31, 0x18D910u);
    ctx->pc = 0x18D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D908u;
    // 0x18d90c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D908u, 0x18D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D910u;
label_18d910:
    // 0x18d910: 0x1000028f  b           . + 4 + (0x28F << 2)
    ctx->pc = 0x18D910u;
    {
        const bool branch_taken_0x18d910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d910) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
    ctx->pc = 0x18D918u;
}
