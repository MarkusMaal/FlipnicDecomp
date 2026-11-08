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

// Function: entry_001a1c08
// Address: 0x1a1c08 - 0x1a1c90
void entry_001a1c08_0x1a1c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1c08_0x1a1c08");
#endif

    ctx->pc = 0x1a1c08u;

    // 0x1a1c08: 0x10600170  beqz        $v1, . + 4 + (0x170 << 2)
    ctx->pc = 0x1A1C08u;
    {
        const bool branch_taken_0x1a1c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c08) {
            ctx->pc = 0x1A21CCu;
            return;
        }
    }
    ctx->pc = 0x1A1C10u;
    // 0x1a1c10: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1a1c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1c14: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1a1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1a1c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1c1c: 0x8e830680  lw          $v1, 0x680($s4)
    ctx->pc = 0x1a1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
    // 0x1a1c20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a1c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a1c24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a1c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a1c28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a1c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a1c2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a1c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a1c30: 0x0  nop
    ctx->pc = 0x1a1c30u;
    // NOP
    // 0x1a1c34: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a1c34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1c38: 0x102000d7  beqz        $at, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1A1C38u;
    {
        const bool branch_taken_0x1a1c38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C38u;
        // 0x1a1c3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c38) {
            ctx->pc = 0x1A1F98u;
            return;
        }
    }
    ctx->pc = 0x1A1C40u;
    // 0x1a1c40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a1c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1c48: 0x0  nop
    ctx->pc = 0x1a1c48u;
    // NOP
    // 0x1a1c4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a1c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a1c50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a1c50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a1c54: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a1c54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a1c58: 0x0  nop
    ctx->pc = 0x1a1c58u;
    // NOP
    // 0x1a1c5c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1a1c5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a1c60: 0x102000cc  beqz        $at, . + 4 + (0xCC << 2)
    ctx->pc = 0x1A1C60u;
    {
        const bool branch_taken_0x1a1c60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c60) {
            ctx->pc = 0x1A1F94u;
            return;
        }
    }
    ctx->pc = 0x1A1C68u;
    // 0x1a1c68: 0x8e830c70  lw          $v1, 0xC70($s4)
    ctx->pc = 0x1a1c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3184)));
    // 0x1a1c6c: 0x8e820c74  lw          $v0, 0xC74($s4)
    ctx->pc = 0x1a1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3188)));
    // 0x1a1c70: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a1c70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1c74: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1C74u;
    {
        const bool branch_taken_0x1a1c74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C74u;
        // 0x1a1c78: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c74) {
            ctx->pc = 0x1A1C90u;
            return;
        }
    }
    ctx->pc = 0x1A1C7Cu;
    // 0x1a1c7c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a1c80: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1a1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1a1c84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1C84u;
    {
        const bool branch_taken_0x1a1c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C84u;
        // 0x1a1c88: 0x8c440bbc  lw          $a0, 0xBBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c84) {
            ctx->pc = 0x1A1C94u;
            return;
        }
    }
    ctx->pc = 0x1A1C8Cu;
    // 0x1a1c8c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1a1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    ctx->pc = 0x1a1c90u;
}
