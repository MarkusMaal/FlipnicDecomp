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

// Function: entry_0013a164
// Address: 0x13a164 - 0x13a1e4
void entry_0013a164_0x13a164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a164_0x13a164");
#endif

    switch (ctx->pc) {
        case 0x13a174u: goto label_13a174;
        default: break;
    }

    ctx->pc = 0x13a164u;

    // 0x13a164: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13a164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a168: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13a168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a16c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x13A16Cu;
    SET_GPR_U32(ctx, 31, 0x13A174u);
    ctx->pc = 0x13A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A16Cu;
    // 0x13a170: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x13A16Cu, 0x13A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A174u;
label_13a174:
    // 0x13a174: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13a174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a178: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x13a178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x13a17c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13a180: 0x8c640090  lw          $a0, 0x90($v1)
    ctx->pc = 0x13a180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x13a184: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x13a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x13a188: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x13a188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x13a18c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x13A18Cu;
    {
        const bool branch_taken_0x13a18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a18c) {
            ctx->pc = 0x13A1E4u;
            return;
        }
    }
    ctx->pc = 0x13A194u;
    // 0x13a194: 0x90830080  lbu         $v1, 0x80($a0)
    ctx->pc = 0x13a194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x13a198: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13A198u;
    {
        const bool branch_taken_0x13a198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a198) {
            ctx->pc = 0x13A1E4u;
            return;
        }
    }
    ctx->pc = 0x13A1A0u;
    // 0x13a1a0: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x13a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a1a4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x13a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x13a1a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13a1a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a1ac: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x13a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13a1b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a1b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13a1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13a1b8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x13a1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x13a1bc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a1c0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x13a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13a1c4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13a1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a1c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13a1c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13a1cc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x13a1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x13a1d0: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a1d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x13a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13a1d8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x13a1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a1dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13a1dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13a1e0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x13a1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->pc = 0x13a1e4u;
}
