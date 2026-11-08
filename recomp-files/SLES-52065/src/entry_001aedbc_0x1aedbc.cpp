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

// Function: entry_001aedbc
// Address: 0x1aedbc - 0x1aee34
void entry_001aedbc_0x1aedbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aedbc_0x1aedbc");
#endif

    ctx->pc = 0x1aedbcu;

    // 0x1aedbc: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1AEDBCu;
    {
        const bool branch_taken_0x1aedbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aedbc) {
            ctx->pc = 0x1AEEA4u;
            return;
        }
    }
    ctx->pc = 0x1AEDC4u;
    // 0x1aedc4: 0x8e8306bc  lw          $v1, 0x6BC($s4)
    ctx->pc = 0x1aedc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1724)));
    // 0x1aedc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1aedc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1aedcc: 0xae8306bc  sw          $v1, 0x6BC($s4)
    ctx->pc = 0x1aedccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1724), GPR_U32(ctx, 3));
    // 0x1aedd0: 0x928306ba  lbu         $v1, 0x6BA($s4)
    ctx->pc = 0x1aedd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1722)));
    // 0x1aedd4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AEDD4u;
    {
        const bool branch_taken_0x1aedd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aedd4) {
            ctx->pc = 0x1AEE38u;
            return;
        }
    }
    ctx->pc = 0x1AEDDCu;
    // 0x1aeddc: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1aeddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aede0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1aede0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1aede4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1aede4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aede8: 0x8e8406bc  lw          $a0, 0x6BC($s4)
    ctx->pc = 0x1aede8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1724)));
    // 0x1aedec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aedecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aedf0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aedf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aedf4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aedf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1aedf8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1aedf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1aedfc: 0x0  nop
    ctx->pc = 0x1aedfcu;
    // NOP
    // 0x1aee00: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1aee00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1aee04: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1AEE04u;
    {
        const bool branch_taken_0x1aee04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee04) {
            ctx->pc = 0x1AEE38u;
            return;
        }
    }
    ctx->pc = 0x1AEE0Cu;
    // 0x1aee0c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1aee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1aee10: 0x9063282c  lbu         $v1, 0x282C($v1)
    ctx->pc = 0x1aee10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10284)));
    // 0x1aee14: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AEE14u;
    {
        const bool branch_taken_0x1aee14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aee14) {
            ctx->pc = 0x1AEE38u;
            return;
        }
    }
    ctx->pc = 0x1AEE1Cu;
    // 0x1aee1c: 0x8e8406cc  lw          $a0, 0x6CC($s4)
    ctx->pc = 0x1aee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1740)));
    // 0x1aee20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEE20u;
    {
        const bool branch_taken_0x1aee20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE20u;
        // 0x1aee24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee20) {
            ctx->pc = 0x1AEE34u;
            return;
        }
    }
    ctx->pc = 0x1AEE28u;
    // 0x1aee28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aee28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aee2c: 0xac830320  sw          $v1, 0x320($a0)
    ctx->pc = 0x1aee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 3));
    // 0x1aee30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aee30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1aee34u;
}
