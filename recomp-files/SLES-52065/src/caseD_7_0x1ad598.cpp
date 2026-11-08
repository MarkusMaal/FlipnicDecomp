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

// Function: caseD_7
// Address: 0x1ad598 - 0x1ad62c
void caseD_7_0x1ad598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1ad598");
#endif

    ctx->pc = 0x1ad598u;

    // 0x1ad598: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x1ad598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x1ad59c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ad59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ad5a0: 0xae2306c8  sw          $v1, 0x6C8($s1)
    ctx->pc = 0x1ad5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 3));
    // 0x1ad5a4: 0x8e2406d4  lw          $a0, 0x6D4($s1)
    ctx->pc = 0x1ad5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1748)));
    // 0x1ad5a8: 0x8e2306d0  lw          $v1, 0x6D0($s1)
    ctx->pc = 0x1ad5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1744)));
    // 0x1ad5ac: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1ad5acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad5b0: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x1AD5B0u;
    {
        const bool branch_taken_0x1ad5b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5b0) {
            ctx->pc = 0x1AD65Cu;
            return;
        }
    }
    ctx->pc = 0x1AD5B8u;
    // 0x1ad5b8: 0x8e2506cc  lw          $a1, 0x6CC($s1)
    ctx->pc = 0x1ad5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
    // 0x1ad5bc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1ad5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1ad5c0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ad5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad5c4: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x1ad5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x1ad5c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ad5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ad5cc: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x1ad5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad5d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad5d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ad5d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ad5d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ad5d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad5d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad5dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad5dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ad5e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ad5e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ad5e4: 0x0  nop
    ctx->pc = 0x1ad5e4u;
    // NOP
    // 0x1ad5e8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1ad5e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ad5ec: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AD5ECu;
    {
        const bool branch_taken_0x1ad5ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5ec) {
            ctx->pc = 0x1AD65Cu;
            return;
        }
    }
    ctx->pc = 0x1AD5F4u;
    // 0x1ad5f4: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x1ad5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad5f8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1ad5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1ad5fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad600: 0x0  nop
    ctx->pc = 0x1ad600u;
    // NOP
    // 0x1ad604: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ad604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ad608: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1ad608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1ad60c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ad60cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ad610: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1ad610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1ad614: 0x0  nop
    ctx->pc = 0x1ad614u;
    // NOP
    // 0x1ad618: 0x0  nop
    ctx->pc = 0x1ad618u;
    // NOP
    // 0x1ad61c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD61Cu;
    {
        const bool branch_taken_0x1ad61c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ad61c) {
            ctx->pc = 0x1AD62Cu;
            return;
        }
    }
    ctx->pc = 0x1AD624u;
    // 0x1ad624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD624u;
    {
        const bool branch_taken_0x1ad624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD624u;
        // 0x1ad628: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad624) {
            ctx->pc = 0x1AD648u;
            return;
        }
    }
    ctx->pc = 0x1AD62Cu;
}
