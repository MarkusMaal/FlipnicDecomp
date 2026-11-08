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

// Function: entry_001a00f0
// Address: 0x1a00f0 - 0x1a0164
void entry_001a00f0_0x1a00f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a00f0_0x1a00f0");
#endif

    switch (ctx->pc) {
        case 0x1a010cu: goto label_1a010c;
        case 0x1a0120u: goto label_1a0120;
        default: break;
    }

    ctx->pc = 0x1a00f0u;

label_1a00f0:
    // 0x1a00f0: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x1a00f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1a00f4:
    // 0x1a00f4: 0x18600054  blez        $v1, . + 4 + (0x54 << 2)
label_1a00f8:
    if (ctx->pc == 0x1A00F8u) {
        ctx->pc = 0x1A00FCu;
        goto label_1a00fc;
    }
    ctx->pc = 0x1A00F4u;
    {
        const bool branch_taken_0x1a00f4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a00f4) {
            ctx->pc = 0x1A0248u;
            return;
        }
    }
    ctx->pc = 0x1A00FCu;
label_1a00fc:
    // 0x1a00fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a00fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0100:
    // 0x1a0100: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x1a0100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_1a0104:
    // 0x1a0104: 0x320f809  jalr        $t9
label_1a0108:
    if (ctx->pc == 0x1A0108u) {
        ctx->pc = 0x1A0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0104u;
        // 0x1a0108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A010Cu;
        goto label_1a010c;
    }
    ctx->pc = 0x1A0104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A010Cu);
        ctx->pc = 0x1A0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0104u;
        // 0x1a0108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0104u, 0x1A010Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A010Cu;
label_1a010c:
    // 0x1a010c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a010cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0110:
    // 0x1a0110: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a0110u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a0114:
    // 0x1a0114: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x1a0114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_1a0118:
    // 0x1a0118: 0x320f809  jalr        $t9
label_1a011c:
    if (ctx->pc == 0x1A011Cu) {
        ctx->pc = 0x1A011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0118u;
        // 0x1a011c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0120u;
        goto label_1a0120;
    }
    ctx->pc = 0x1A0118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0120u);
        ctx->pc = 0x1A011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0118u;
        // 0x1a011c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0118u, 0x1A0120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0120u;
label_1a0120:
    // 0x1a0120: 0x0  nop
    ctx->pc = 0x1a0120u;
    // NOP
label_1a0124:
    // 0x1a0124: 0x0  nop
    ctx->pc = 0x1a0124u;
    // NOP
label_1a0128:
    // 0x1a0128: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x1a0128u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_1a012c:
    // 0x1a012c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x1a012cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_1a0130:
    // 0x1a0130: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a0130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a0134:
    // 0x1a0134: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1a0134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a0138:
    // 0x1a0138: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a0138u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a013c:
    // 0x1a013c: 0x0  nop
    ctx->pc = 0x1a013cu;
    // NOP
label_1a0140:
    // 0x1a0140: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a0140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a0144:
    // 0x1a0144: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a0144u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a0148:
    // 0x1a0148: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1a0148u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1a014c:
    // 0x1a014c: 0x0  nop
    ctx->pc = 0x1a014cu;
    // NOP
label_1a0150:
    // 0x1a0150: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1a0150u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a0154:
    // 0x1a0154: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
label_1a0158:
    if (ctx->pc == 0x1A0158u) {
        ctx->pc = 0x1A015Cu;
        goto label_1a015c;
    }
    ctx->pc = 0x1A0154u;
    {
        const bool branch_taken_0x1a0154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0154) {
            ctx->pc = 0x1A0248u;
            return;
        }
    }
    ctx->pc = 0x1A015Cu;
label_1a015c:
    // 0x1a015c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1a0160:
    if (ctx->pc == 0x1A0160u) {
        ctx->pc = 0x1A0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A015Cu;
        // 0x1a0160: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0164u;
        goto label_fallthrough_0x1a015c;
    }
    ctx->pc = 0x1A015Cu;
    {
        const bool branch_taken_0x1a015c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A015Cu;
        // 0x1a0160: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a015c) {
            ctx->pc = 0x1A0248u;
            return;
        }
    }
label_fallthrough_0x1a015c:
    ctx->pc = 0x1A0164u;
}
