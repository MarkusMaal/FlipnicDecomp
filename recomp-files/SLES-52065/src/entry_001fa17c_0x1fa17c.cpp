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

// Function: entry_001fa17c
// Address: 0x1fa17c - 0x1fa224
void entry_001fa17c_0x1fa17c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa17c_0x1fa17c");
#endif

    switch (ctx->pc) {
        case 0x1fa194u: goto label_1fa194;
        default: break;
    }

    ctx->pc = 0x1fa17cu;

    // 0x1fa17c: 0x34420f80  ori         $v0, $v0, 0xF80
    ctx->pc = 0x1fa17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3968);
    // 0x1fa180: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fa180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fa184: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1FA184u;
    {
        const bool branch_taken_0x1fa184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA184u;
        // 0x1fa188: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa184) {
            ctx->pc = 0x1FA300u;
            return;
        }
    }
    ctx->pc = 0x1FA18Cu;
    // 0x1fa18c: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x1FA18Cu;
    SET_GPR_U32(ctx, 31, 0x1FA194u);
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x1FA18Cu, 0x1FA194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA194u;
label_1fa194:
    // 0x1fa194: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x1fa194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
    // 0x1fa198: 0x3421f984  ori         $at, $at, 0xF984
    ctx->pc = 0x1fa198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63876);
    // 0x1fa19c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa1a0: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x1fa1a0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x1fa1a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fa1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fa1a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fa1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa1ac: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x1fa1acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1fa1b0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1fa1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1fa1b4: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x1fa1b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x1fa1b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa1bc: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1fa1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1fa1c0: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x1fa1c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x1fa1c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fa1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fa1c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1fa1c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1fa1cc: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa1ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1fa1d0: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1fa1d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1fa1d4: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x1fa1d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1fa1d8: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1fa1d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1fa1dc: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1fa1dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fa1e0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1fa1e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fa1e4: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x1fa1e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x1fa1e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FA1E8u;
    {
        const bool branch_taken_0x1fa1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1E8u;
        // 0x1fa1ec: 0x46002901  sub.s       $f4, $f5, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1e8) {
            ctx->pc = 0x1FA224u;
            return;
        }
    }
    ctx->pc = 0x1FA1F0u;
    // 0x1fa1f0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1fa1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1fa1f4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1fa1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1fa1f8: 0x24844c18  addiu       $a0, $a0, 0x4C18
    ctx->pc = 0x1fa1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19480));
    // 0x1fa1fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fa1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa200: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fa200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fa204: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fa204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fa208: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1fa208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x1fa20c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fa20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa210: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1fa210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1fa214: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA214u;
    {
        const bool branch_taken_0x1fa214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA214u;
        // 0x1fa218: 0x46032001  sub.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa214) {
            ctx->pc = 0x1FA228u;
            return;
        }
    }
    ctx->pc = 0x1FA21Cu;
    // 0x1fa21c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1FA21Cu;
    {
        const bool branch_taken_0x1fa21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA21Cu;
        // 0x1fa220: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa21c) {
            ctx->pc = 0x1FA2E0u;
            return;
        }
    }
    ctx->pc = 0x1FA224u;
}
